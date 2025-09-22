// Copyright Epic Games, Inc. All Rights Reserved.

#include "BeyondDarkRemakeCharacter.h"
#include "BeyondDarkRemakeProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Engine/LocalPlayer.h"
#include "FirstPersonBobComponent.h"
#include "LookSwayComponent.h"
#include "FOVKickComponent.h"
#include "StickyMovementInputComponent.h"
#include "DirectionalLeanComponent.h"
#include "HidingSpotComponent.h"
#include "DrawDebugHelpers.h"  
#include "GameFramework/CharacterMovementComponent.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// ABeyondDarkRemakeCharacter

ABeyondDarkRemakeCharacter::ABeyondDarkRemakeCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

	BobComp = CreateDefaultSubobject<UFirstPersonBobComponent>(TEXT("CameraBob"));
	FOVKickComp = CreateDefaultSubobject<UFOVKickComponent>(TEXT("SprintEffects"));
	StickyMoveComp = CreateDefaultSubobject<UStickyMovementInputComponent>(TEXT("WeightedMovement"));
	LookSwayComp = CreateDefaultSubobject<ULookSwayComponent>(TEXT("LookSway"));
	LeanComp = CreateDefaultSubobject<UDirectionalLeanComponent>(TEXT("DirectionalLean"));

}

// .cpp
void ABeyondDarkRemakeCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (FirstPersonCameraComponent && !bCamDefaultsSaved)
	{
		CamRel_DefaultLoc = FirstPersonCameraComponent->GetRelativeLocation();
		CamRel_DefaultRot = FirstPersonCameraComponent->GetRelativeRotation();
		bCamDefaultsSaved = true;
	}

	StandCapsuleHalfHeight = GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight();

	// Ensure Lean runs after Bob and LookSway each frame
	if (LeanComp)
	{
		if (BobComp)      LeanComp->AddTickPrerequisiteComponent(BobComp);
		if (LookSwayComp) LeanComp->AddTickPrerequisiteComponent(LookSwayComp);
		if (auto* CM = GetCharacterMovement()) LeanComp->AddTickPrerequisiteComponent(CM);
		//LeanComp->Camera = FirstPersonCameraComponent;
	}


	// Optional (recommended): enforce the full chain
	if (auto* CM = GetCharacterMovement())
	{
		if (BobComp) { BobComp->AddTickPrerequisiteComponent(CM); }
		if (LookSwayComp) { LookSwayComp->AddTickPrerequisiteComponent(BobComp ? (UActorComponent*)BobComp : CM); }
		if (LeanComp) { LeanComp->AddTickPrerequisiteComponent(CM); } // belt & suspenders
	}
}


//////////////////////////////////////////////////////////////////////////// Input

void ABeyondDarkRemakeCharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();


	if (UCharacterMovementComponent* CM = GetCharacterMovement())
	{
		CM->MaxWalkSpeed = 250.0f;
		CM->BrakingDecelerationWalking = 1400.f; // soft stop, not instant
		CM->GroundFriction = 5.f;
		CM->bUseSeparateBrakingFriction = true;
		CM->BrakingFriction = 2.5f;
	}

	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void ABeyondDarkRemakeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{	
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABeyondDarkRemakeCharacter::Move);

		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Completed, this, &ABeyondDarkRemakeCharacter::ClearMove);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Canceled, this, &ABeyondDarkRemakeCharacter::ClearMove);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABeyondDarkRemakeCharacter::Look);

		//sprinting
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Started, this, &ABeyondDarkRemakeCharacter::StartSprint);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &ABeyondDarkRemakeCharacter::StopSprint);

		//crouch
		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Started, this, &ABeyondDarkRemakeCharacter::OnCrouchPressed);
		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Completed, this, &ABeyondDarkRemakeCharacter::OnCrouchReleased);

		// inside ABeyondDarkRemakeCharacter::SetupPlayerInputComponent(...)
		EnhancedInputComponent->BindAction(ToggleDoorAction, ETriggerEvent::Started, this, &ABeyondDarkRemakeCharacter::OnToggleDoor);

		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &ABeyondDarkRemakeCharacter::OnInteract);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

UHidingSpotComponent* ABeyondDarkRemakeCharacter::TraceHidingSpot(float Distance) const
{
	const APlayerController* PC = Cast<APlayerController>(Controller);
	if (!PC || !FirstPersonCameraComponent) return nullptr;

	const FVector Start = FirstPersonCameraComponent->GetComponentLocation();
	const FVector End = Start + FirstPersonCameraComponent->GetForwardVector() * Distance;

	FHitResult Hit;
	FCollisionQueryParams Params(SCENE_QUERY_STAT(HideTrace), false, this);
	GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params);

	// Optional debug:
	// DrawDebugLine(GetWorld(), Start, End, FColor::Cyan, false, 0.f, 0, 0.75f);

	if (AActor* A = Hit.GetActor())
	{
		if (UHidingSpotComponent* Spot = A->FindComponentByClass<UHidingSpotComponent>())
			return Spot;
		if (UPrimitiveComponent* Comp = Hit.GetComponent())
			if (AActor* Ownerr = Comp->GetOwner())
				if (UHidingSpotComponent* Spot2 = Ownerr->FindComponentByClass<UHidingSpotComponent>())
					return Spot2;
	}
	return nullptr;
}

void ABeyondDarkRemakeCharacter::OnCrouchPressed()
{
	if (bIsHiddenInSpot) return;

	if (bCrouchIsToggle)
	{
		bWantsCrouch = !bWantsCrouch;
		if (bWantsCrouch) bIsSprinting = false; // no sprint while crouched
	}
	else
	{
		bWantsCrouch = true;
		bIsSprinting = false;
	}
}

void ABeyondDarkRemakeCharacter::OnCrouchReleased()
{
	if (!bCrouchIsToggle)
	{
		bWantsCrouch = false;
	}
}

void ABeyondDarkRemakeCharacter::ClearMove()
{
	RawMoveInput = FVector2D::ZeroVector;
}

void ABeyondDarkRemakeCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	// Smooth the input, then move
	FVector2D S = FVector2D::ZeroVector;

	UpdateCrouch(DeltaSeconds);

	if (StickyMoveComp)
	{
		const float ApplyThreshold = 0.03f;
		const float StopThreshold = 0.015f;

		S = StickyMoveComp->UpdateAndGetSmoothed(RawMoveInput, DeltaSeconds);

		if (Controller)
		{
			if (!bApplyingMove)
			{
				if (S.Size() > ApplyThreshold) bApplyingMove = true;
			}
			else
			{
				if (S.Size() < StopThreshold) bApplyingMove = false;
			}

			if (bApplyingMove)
			{
				AddMovementInput(GetActorForwardVector(), S.Y);
				AddMovementInput(GetActorRightVector(), S.X);
			}
			else
			{
				GetCharacterMovement()->StopMovementImmediately();
			}
		}
	}

	// === Directional speed using UPROPERTY tunables ===
	if (UCharacterMovementComponent* CM = GetCharacterMovement())
	{
		const float Base = bIsSprinting ? SprintSpeedBase : WalkSpeedBase;

		float TargetSpeed = Base;

		if (bApplyingMove && !S.IsNearlyZero())
		{
			const FVector2D Dir2D = S.GetSafeNormal();

			// L1 weights so diagonals don't go faster
			const float ax = FMath::Abs(Dir2D.X); // strafe contribution
			const float ay = FMath::Abs(Dir2D.Y); // forward/back contribution
			const float sum = ax + ay;

			float wx = 0.f, wy = 0.f;
			if (sum > KINDA_SMALL_NUMBER) { wx = ax / sum; wy = ay / sum; }

			const bool  bForward = (Dir2D.Y > 0.f);
			const float M_Forward = ForwardMult;
			const float M_Back = bIsSprinting ? SprintBackwardMult : BackwardMult;
			const float M_Strafe = bIsSprinting ? SprintStrafeMult : StrafeMult;

			const float DirMult = wx * M_Strafe + wy * (bForward ? M_Forward : M_Back);

			TargetSpeed = Base * FMath::Clamp(DirMult, 0.05f, 1.50f);
		}

		float t = CrouchPhase;
		if (CrouchEase) t = FMath::Clamp(CrouchEase->GetFloatValue(t), 0.f, 1.f);
		else            t = t * t * (3.f - 2.f * t); // smoothstep

		const float CrouchScale = FMath::Lerp(1.f, CrouchSpeedMult, t);
		TargetSpeed *= CrouchScale;

		CM->MaxWalkSpeed = FMath::FInterpTo(CM->MaxWalkSpeed, TargetSpeed, DeltaSeconds, SpeedInterpRate);
	}

	// FOV kick based on sprint state
	if (FOVKickComp) { FOVKickComp->SetSprinting(bIsSprinting); }

	// === Camera peek follows door while hidden ===
	if (bIsHiddenInSpot && CurrentHideSpot.IsValid() && FirstPersonCameraComponent)
	{
		FVector LocalOffset; float YawAddDeg = 0.f;
		CurrentHideSpot->GetPeekForPawn(this, LocalOffset, YawAddDeg);

		// Apply as extra relative offset from the default FP camera position
		FirstPersonCameraComponent->SetRelativeLocation(CamRel_DefaultLoc + LocalOffset);

		// Add a little yaw to "look through" the gap (does not affect controller yaw)
		FRotator R = CamRel_DefaultRot;
		R.Yaw += YawAddDeg;
		FirstPersonCameraComponent->SetRelativeRotation(R);
	}
}

void ABeyondDarkRemakeCharacter::UpdateCrouch(float DT)
{
	// advance phase 0->1 (down) or 1->0 (up) by time
	const float Dur = bWantsCrouch ? FMath::Max(CrouchDownTime, 0.001f)
		: FMath::Max(CrouchUpTime, 0.001f);
	const float Step = DT / Dur;
	CrouchPhase = FMath::Clamp(CrouchPhase + (bWantsCrouch ? +Step : -Step), 0.f, 1.f);

	// ease
	float a = CrouchPhase;
	if (CrouchEase) a = FMath::Clamp(CrouchEase->GetFloatValue(a), 0.f, 1.f);
	else            a = a * a * (3.f - 2.f * a); // smoothstep

	// capsule height
	const float NewHH = FMath::Lerp(StandCapsuleHalfHeight, CrouchCapsuleHalfHeight, a);
	GetCapsuleComponent()->SetCapsuleHalfHeight(NewHH, true);

	// camera base offset (goes through BobComp so it layers nicely with bob/lean)
	if (BobComp)
	{
		BobComp->ExternalBaseOffsetZ = FMath::Lerp(0.f, CrouchCameraZ, a);
		BobComp->CrouchAlpha = a;
	}

	// prevent sprint while crouching or during transition
	if (CrouchPhase > 0.05f) bIsSprinting = false;
}

void ABeyondDarkRemakeCharacter::Move(const FInputActionValue& Value)
{
	const FVector2D Axis = Value.Get<FVector2D>();

	if (bIsHiddenInSpot && CurrentHideSpot.IsValid())
	{
		// Select which stick direction opens the door based on the spot’s setting
		float UseAxis = 0.f;
		switch (CurrentHideSpot->OpenInputMode)
		{
		case EDoorOpenInput::Forward: UseAxis = Axis.Y;        break; // W opens
		case EDoorOpenInput::Right:   UseAxis = Axis.X;        break; // D opens
		case EDoorOpenInput::Left:    UseAxis = -Axis.X;       break; // A opens
		}

		CurrentHideSpot->DriveDoorWhileHidden(UseAxis, GetWorld()->GetDeltaSeconds());

		// Do NOT move while hidden
		RawMoveInput = FVector2D::ZeroVector;
		return;
	}

	// Normal movement when not hidden
	RawMoveInput = Axis;
}

void ABeyondDarkRemakeCharacter::StartSprint()
{
	if (bIsHiddenInSpot) return;
	bIsSprinting = true;
	if (FOVKickComp) FOVKickComp->SetSprinting(true);
}
void ABeyondDarkRemakeCharacter::StopSprint()
{
	bIsSprinting = false;
	if (FOVKickComp) FOVKickComp->SetSprinting(false);
}

void ABeyondDarkRemakeCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxis = Value.Get<FVector2D>();

	if (LookSwayComp) LookSwayComp->AddLookInput(LookAxis); // <-- forward to sway

	if (Controller)
	{
		AddControllerYawInput(LookAxis.X);
		AddControllerPitchInput(LookAxis.Y);
	}
}

void ABeyondDarkRemakeCharacter::OnInteract()
{
	// If currently hidden in a spot, exit
	if (bIsHiddenInSpot && CurrentHideSpot.IsValid())
	{
		if (CurrentHideSpot->Exit(/*bAutoOpen=*/true))
		{
			bIsHiddenInSpot = false;
			CurrentHideSpot = nullptr;
			bIsSprinting = false;
			if (FOVKickComp) FOVKickComp->SetSprinting(false);
		}
		return;
	}

	// Otherwise, find a spot and auto-enter (no need to open first)
	if (UHidingSpotComponent* Spot = TraceHidingSpot(250.f))
	{
		if (Spot->StartAutoEnter(this))
		{
			bIsHiddenInSpot = true;
			CurrentHideSpot = Spot;
			RawMoveInput = FVector2D::ZeroVector;
			bIsSprinting = false;
			if (FOVKickComp) FOVKickComp->SetSprinting(false);
		}
	}
}

void ABeyondDarkRemakeCharacter::OnToggleDoor()
{
	// Toggle the door/lid of the spot you’re looking at
	if (UHidingSpotComponent* Spot = TraceHidingSpot(250.f))
	{
		Spot->ToggleOpen();
		FocusedHidingSpot = Spot;
	}
}