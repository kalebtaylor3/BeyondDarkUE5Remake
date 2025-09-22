// HidingSpotComponent.cpp
#include "HidingSpotComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SceneComponent.h"
#include "Curves/CurveFloat.h"
#include "HideableCharacter.h"

UHidingSpotComponent::UHidingSpotComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

static USceneComponent* ResolveComp(const FComponentReference& Ref, AActor* Owner)
{
	return Cast<USceneComponent>(Ref.GetComponent(Owner));
}

void UHidingSpotComponent::BeginPlay()
{
	Super::BeginPlay();

	EntryPoint = ResolveComp(EntryPointRef, GetOwner());
	ExitPoint = ResolveComp(ExitPointRef, GetOwner());
	DoorComponent = ResolveComp(DoorRef, GetOwner());
	SeatPoint = ResolveComp(SeatPointRef, GetOwner());
	PeekDirBasis = ResolveComp(PeekDirBasisRef, GetOwner());

	if (!DoorComponent)
	{
		static const FName DoorTag(TEXT("Door"));
		TArray<USceneComponent*> All;
		GetOwner()->GetComponents(All);
		for (USceneComponent* C : All)
		{
			if (C && (C->ComponentHasTag(DoorTag) || C->GetName().Contains(TEXT("Door"), ESearchCase::IgnoreCase)))
			{
				DoorComponent = C; break;
			}
		}
	}

	// Cache CLOSED local (door's current local)
	if (DoorComponent)
	{
		if (USceneComponent* Parent = DoorComponent->GetAttachParent())
		{
			DoorClosedLocal = DoorComponent->GetRelativeTransform();
			// Build OPEN local from door type
			switch (DoorType)
			{
			case EHidingDoorType::Sliding:
			{
				FTransform T = DoorClosedLocal;
				T.AddToTranslation(SlideOffsetLocal);
				DoorOpenLocal = T;
				break;
			}
			case EHidingDoorType::Hinged:
			case EHidingDoorType::Lid:
			{
				FTransform T = DoorClosedLocal;
				FRotator R = T.GetRotation().Rotator();
				R += OpenRotationLocal;
				T.SetRotation(FQuat(R));
				DoorOpenLocal = T;
				break;
			}
			default:
				DoorOpenLocal = DoorClosedLocal;
				break;
			}
		}
	}

	// Ensure initial pose
	ApplyDoorPose(OpenAlpha);
	TargetAlpha = OpenAlpha;
}

bool UHidingSpotComponent::StartAutoExit(bool bAlsoOpenDoor)
{
	if (!bIsOccupied || !Occupant.IsValid() || bLocked) return false;

	bPlayingAutoExit = true;
	AutoExitT = 0.f;
	AutoExitPawn = Occupant.Get();

	ExitStartLoc = AutoExitPawn->GetActorLocation();
	ExitStartRot = AutoExitPawn->GetActorRotation();

	// Where to end up (ExitPoint > EntryPoint-forward > Owner-forward)
	if (ExitPoint)
	{
		ExitEndLoc = ExitPoint->GetComponentLocation();
		ExitEndRot = ExitPoint->GetComponentRotation();
	}
	else if (EntryPoint)
	{
		const FVector Fwd = EntryPoint->GetForwardVector();
		ExitEndLoc = EntryPoint->GetComponentLocation() + Fwd * 100.f;
		ExitEndRot = EntryPoint->GetComponentRotation();
	}
	else
	{
		const FVector Fwd = GetOwner()->GetActorForwardVector();
		ExitEndLoc = GetOwner()->GetActorLocation() + Fwd * 100.f;
		ExitEndRot = GetOwner()->GetActorRotation();
	}

	if (bAlsoOpenDoor)
	{
		TargetAlpha = FMath::Clamp(ExitTargetOpenAlpha, 0.f, 1.f);
	}

	ExitRelaxTimer = 0.f; // we’ll hold relax until done + hold time
	return true;
}

void UHidingSpotComponent::BeginDoorManipulation(APawn* /*ByPawn*/)
{
	if (bLocked) return;
	bDrivingDoor = true;
}

void UHidingSpotComponent::DriveDoorAxis(float Axis, float DT)
{
	if (!bDrivingDoor || bLocked) return;
	// push/pull door by axis; positive opens
	const float Step = Axis * DoorDriveSpeed * DT;
	TargetAlpha = FMath::Clamp(TargetAlpha + Step, 0.f, 1.f);
}

void UHidingSpotComponent::EndDoorManipulation()
{
	bDrivingDoor = false;
	// on release, relax toward closed unless occupied (then keep as-is)
	if (!bIsOccupied && !bLocked)
	{
		// nudge target back to closed; Tick will do the rest smoothly
		// (use relax speed by temporarily biasing OpenAlpha down)
		TargetAlpha = 0.f;
		// Optional: make relaxation speed feel softer
		DoorSpeed = DoorRelaxCloseSpeed;
	}
}

bool UHidingSpotComponent::StartAutoEnter(APawn* Pawn)
{
	if (!Pawn || bLocked || bIsOccupied) return false;

	TargetAlpha = 1.f; // start opening while we slide in
	AutoEnterPawn = Pawn;
	bPlayingAutoEnter = true;
	AutoEnterT = 0.f;
	EnterStartLoc = Pawn->GetActorLocation();
	EnterStartRot = Pawn->GetActorRotation();
	return true;
}

void UHidingSpotComponent::DriveDoorWhileHidden(float Axis, float DT)
{
	if (bLocked || bPlayingAutoEnter) { bDrivingDoor = false; return; }

	const float Abs = FMath::Abs(Axis);
	if (Abs > InputDeadzone)
	{
		bDrivingDoor = true;

		// Manually change the open amount
		OpenAlpha = FMath::Clamp(OpenAlpha + Axis * DoorDriveSpeed * DT, 0.f, 1.f);
		const float Eval = DoorCurve ? DoorCurve->GetFloatValue(OpenAlpha) : OpenAlpha;
		ApplyDoorPose(Eval);

		TargetAlpha = OpenAlpha; // <<< CRITICAL: keep interp from fighting manual drive
	}
	else
	{
		bDrivingDoor = false;
	}
}

void UHidingSpotComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// (1) Interp door toward TargetAlpha (for auto-enter start, OpenTo, etc.)
	if (!FMath::IsNearlyEqual(OpenAlpha, TargetAlpha, 0.0001f))
	{
		const float Raw = FMath::FInterpTo(OpenAlpha, TargetAlpha, DeltaTime, DoorSpeed * 10.f);
		OpenAlpha = FMath::Clamp(Raw, 0.f, 1.f);
		const float Eval = DoorCurve ? DoorCurve->GetFloatValue(OpenAlpha) : OpenAlpha;
		ApplyDoorPose(Eval);
	}

	// (2) Auto-enter glide (to SeatPoint/EntryPoint)
	if (bPlayingAutoEnter && AutoEnterPawn.IsValid())
	{
		const float Dur = FMath::Max(AutoEnterDuration, 0.01f);
		AutoEnterT = FMath::Min(AutoEnterT + DeltaTime / Dur, 1.f);

		float Eased = AutoEnterEase ? AutoEnterEase->GetFloatValue(AutoEnterT) : AutoEnterT;

		FVector EndLoc = GetOwner()->GetActorLocation();
		FRotator EndRot = GetOwner()->GetActorRotation();
		if (SeatPoint) { EndLoc = SeatPoint->GetComponentLocation(); EndRot = SeatPoint->GetComponentRotation(); }
		else if (EntryPoint) { EndLoc = EntryPoint->GetComponentLocation(); EndRot = EntryPoint->GetComponentRotation(); }

		AutoEnterPawn->SetActorLocation(FMath::Lerp(EnterStartLoc, EndLoc, Eased), false, nullptr, ETeleportType::TeleportPhysics);
		AutoEnterPawn->SetActorRotation(FMath::RInterpTo(EnterStartRot, EndRot, DeltaTime, 6.f));

		TargetAlpha = 1.f; // keep door opening while entering

		if (AutoEnterT >= 1.f)
		{
			bPlayingAutoEnter = false;

			Occupant = AutoEnterPawn.Get();
			bIsOccupied = true;

			SetPawnHiddenState(Occupant.Get(), true);
			if (bDisablePawnMovementInside) SetPawnMovementEnabled(Occupant.Get(), false);

			if (Occupant->GetClass()->ImplementsInterface(UHideableCharacter::StaticClass()))
			{
				IHideableCharacter::Execute_OnEnterHiding(Occupant.Get(), this);
			}
			OnEnter.Broadcast(Occupant.Get());

			TargetAlpha = OpenAlpha; // hand off to manual/relax
		}
	}

	// (3) Auto-exit glide (from seat to exit point)
	if (bPlayingAutoExit && AutoExitPawn.IsValid())
	{
		const float Dur = FMath::Max(AutoExitDuration, 0.01f);
		AutoExitT = FMath::Min(AutoExitT + DeltaTime / Dur, 1.f);

		float Eased = AutoExitEase ? AutoExitEase->GetFloatValue(AutoExitT) : AutoExitT;

		const FVector L = FMath::Lerp(ExitStartLoc, ExitEndLoc, Eased);
		const FRotator R = FMath::RInterpTo(ExitStartRot, ExitEndRot, DeltaTime, 6.f);

		AutoExitPawn->SetActorLocation(L, false, nullptr, ETeleportType::TeleportPhysics);
		AutoExitPawn->SetActorRotation(R);

		// keep door at least at requested openness during exit
		if (ExitTargetOpenAlpha > OpenAlpha)
		{
			TargetAlpha = ExitTargetOpenAlpha;
		}

		if (AutoExitT >= 1.f)
		{
			APawn* Pawn = AutoExitPawn.Get();

			SetPawnHiddenState(Pawn, false);
			if (bDisablePawnMovementInside) SetPawnMovementEnabled(Pawn, true);

			if (Pawn->GetClass()->ImplementsInterface(UHideableCharacter::StaticClass()))
			{
				IHideableCharacter::Execute_OnExitHiding(Pawn, this);
			}
			OnExit.Broadcast(Pawn);

			Occupant = nullptr;
			bIsOccupied = false;

			AutoExitPawn = nullptr;
			bPlayingAutoExit = false;

			// brief hold so it doesn't slam shut immediately
			ExitRelaxTimer = 0.f;   // don't hold it open
			TargetAlpha = 0.f;   // actively close via the normal interp
		}
	}

	// (4) Relax toward closed when not driving/entering/exiting/locked
	if (!bDrivingDoor && !bPlayingAutoEnter && !bPlayingAutoExit && !bLocked && OpenAlpha > 0.f)
	{
		if (ExitRelaxTimer > 0.f)
		{
			ExitRelaxTimer = FMath::Max(ExitRelaxTimer - DeltaTime, 0.f);
		}
		else
		{
			OpenAlpha = FMath::FInterpConstantTo(OpenAlpha, 0.f, DeltaTime, DoorRelaxCloseSpeed);
			const float Eval = DoorCurve ? DoorCurve->GetFloatValue(OpenAlpha) : OpenAlpha;
			ApplyDoorPose(Eval);
			TargetAlpha = OpenAlpha;
		}
	}
}

// === Camera peek helper ===
void UHidingSpotComponent::GetPeekForPawn(APawn* Pawn, FVector& OutLocalOffset, float& OutYawAddDegrees) const
{
	OutLocalOffset = FVector::ZeroVector;
	OutYawAddDegrees = 0.f;
	if (!Pawn) return;

	// Amount (0..1) based on current open
	const float t = PeekCurve ? PeekCurve->GetFloatValue(OpenAlpha) : OpenAlpha;
	if (t <= KINDA_SMALL_NUMBER) return;

	// Basis to define peek direction
	const USceneComponent* Basis =
		PeekDirBasis.Get() ? PeekDirBasis.Get()
		: (DoorComponent.Get() ? DoorComponent.Get()
			: GetOwner()->GetRootComponent());

	FVector DirWS = Basis ? Basis->GetForwardVector() : FVector::ForwardVector;
	switch (OpenInputMode)
	{
	case EDoorOpenInput::Forward: DirWS = Basis->GetForwardVector(); break;
	case EDoorOpenInput::Right:   DirWS = Basis->GetRightVector();   break;
	case EDoorOpenInput::Left:    DirWS = -Basis->GetRightVector();  break;
	}

	// World offset
	const FVector OffsetWS = DirWS * (PeekMaxDistance * t);

	// Convert to the pawn root's local space so the character can apply as camera relative
	const USceneComponent* Root = Pawn->GetRootComponent();
	const FTransform RootXf = Root ? Root->GetComponentTransform() : FTransform::Identity;
	const FVector Local = RootXf.InverseTransformVectorNoScale(OffsetWS);
	OutLocalOffset = Local;

	// Yaw toward the opening side
	const float Sign = FMath::Sign(FVector::DotProduct(DirWS, Pawn->GetActorRightVector())); // +right, -left
	OutYawAddDegrees = Sign * PeekYawMaxDegrees * t;
}


void UHidingSpotComponent::ApplyDoorPose(float InAlpha)
{
	if (!DoorComponent) return;

	// Lerp local transforms (rotation & translation)
	const FTransform L = FTransform::Identity;
	FTransform NewLocal;
	NewLocal.Blend(DoorClosedLocal, DoorOpenLocal, InAlpha);
	DoorComponent->SetRelativeTransform(NewLocal);
}

void UHidingSpotComponent::ToggleOpen()
{
	if (bLocked) return;
	OpenTo(TargetAlpha < 0.5f ? 1.f : 0.f);
}

void UHidingSpotComponent::OpenTo(float Target)
{
	if (bLocked) return;
	TargetAlpha = FMath::Clamp(Target, 0.f, 1.f);
	OnDoorTargetChanged.Broadcast(TargetAlpha);
}

bool UHidingSpotComponent::CanEnter(APawn* Pawn) const
{
	if (bLocked) return false;
	if (bIsOccupied) return false;
	if (!Pawn) return false;
	if (OpenAlpha < MinOpenToEnter) return false;
	return true;
}

bool UHidingSpotComponent::Enter(APawn* Pawn, bool bAutoClose)
{
	if (!CanEnter(Pawn)) return false;

	// Snap pawn, mark occupied
	MovePawnInto(Pawn);
	Occupant = Pawn;
	bIsOccupied = true;

	SetPawnHiddenState(Pawn, true);
	if (bDisablePawnMovementInside) SetPawnMovementEnabled(Pawn, false);

	// Let pawn react (camera/UI)
	if (Pawn->GetClass()->ImplementsInterface(UHideableCharacter::StaticClass()))
	{
		IHideableCharacter::Execute_OnEnterHiding(Pawn, this);
	}

	OnEnter.Broadcast(Pawn);

	if (bAutoClose && !bLocked)
	{
		OpenTo(0.f);
	}

	return true;
}

bool UHidingSpotComponent::Exit(bool bAutoOpen)
{
	if (!bIsOccupied || !Occupant.IsValid()) return false;

	if (bUseSmoothExit)
	{
		return StartAutoExit(/*bAlsoOpenDoor=*/bAutoOpen);
	}

	// --- Instant fallback ---
	APawn* Pawn = Occupant.Get();
	MovePawnOut(Pawn);

	SetPawnHiddenState(Pawn, false);
	if (bDisablePawnMovementInside) SetPawnMovementEnabled(Pawn, true);

	if (Pawn->GetClass()->ImplementsInterface(UHideableCharacter::StaticClass()))
	{
		IHideableCharacter::Execute_OnExitHiding(Pawn, this);
	}
	OnExit.Broadcast(Pawn);

	Occupant = nullptr;
	bIsOccupied = false;

	if (bAutoOpen) OpenTo(1.f);
	return true;
}

bool UHidingSpotComponent::ForceExit()
{
	if (!bIsOccupied || !Occupant.IsValid()) return false;

	const bool bWasLocked = bLocked;
	bLocked = false;
	const bool bOk = Exit(/*bAutoOpen=*/true);
	bLocked = bWasLocked;
	return bOk;
}

void UHidingSpotComponent::MovePawnInto(APawn* Pawn)
{
	if (!Pawn) return;

	FVector TargetLoc = GetOwner()->GetActorLocation();
	FRotator TargetRot = GetOwner()->GetActorRotation();

	if (EntryPoint)
	{
		TargetLoc = EntryPoint->GetComponentLocation();
		TargetRot = EntryPoint->GetComponentRotation();
	}

	Pawn->SetActorLocationAndRotation(TargetLoc, TargetRot, false, nullptr, ETeleportType::TeleportPhysics);
}

void UHidingSpotComponent::MovePawnOut(APawn* Pawn)
{
	if (!Pawn) return;

	FVector OutLoc;
	FRotator OutRot;

	if (ExitPoint)
	{
		OutLoc = ExitPoint->GetComponentLocation();
		OutRot = ExitPoint->GetComponentRotation();
	}
	else if (EntryPoint)
	{
		// Step forward from entry
		const FVector Fwd = EntryPoint->GetForwardVector();
		OutLoc = EntryPoint->GetComponentLocation() + Fwd * 100.f;
		OutRot = EntryPoint->GetComponentRotation();
	}
	else
	{
		const FVector Fwd = GetOwner()->GetActorForwardVector();
		OutLoc = GetOwner()->GetActorLocation() + Fwd * 100.f;
		OutRot = GetOwner()->GetActorRotation();
	}

	Pawn->SetActorLocationAndRotation(OutLoc, OutRot, false, nullptr, ETeleportType::TeleportPhysics);
}

void UHidingSpotComponent::SetPawnHiddenState(APawn* Pawn, bool bHidden)
{
	if (!Pawn) return;

	// Don’t use SetActorHiddenInGame (that vanishes the player). Instead: mark “hidden for AI”.
	// Minimal default: set a tag and let your AI perception/BT read it.
	static const FName HiddenTag(TEXT("State.Hidden"));
	if (bMarkPawnAsHiddenForAI)
	{
		if (bHidden) Pawn->Tags.AddUnique(HiddenTag);
		else Pawn->Tags.Remove(HiddenTag);
	}
}

void UHidingSpotComponent::SetPawnMovementEnabled(APawn* Pawn, bool bEnabled)
{
	if (ACharacter* C = Cast<ACharacter>(Pawn))
	{
		if (UCharacterMovementComponent* Move = C->GetCharacterMovement())
		{
			Move->DisableMovement();
			if (bEnabled)
			{
				Move->SetMovementMode(MOVE_Walking);
			}
		}
	}
}

#if WITH_EDITOR
void UHidingSpotComponent::SnapClosedFromCurrent()
{
	if (!DoorComponent) return;
	DoorClosedLocal = DoorComponent->GetRelativeTransform();
}

void UHidingSpotComponent::SnapOpenFromCurrent()
{
	if (!DoorComponent) return;
	DoorOpenLocal = DoorComponent->GetRelativeTransform();
}
#endif
