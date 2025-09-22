// HidingSpotComponent.h
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HidingSpotComponent.generated.h"

class UCurveFloat;

UENUM(BlueprintType)
enum class EHidingDoorType : uint8
{
	None   UMETA(DisplayName = "None"),
	Hinged UMETA(DisplayName = "Hinged"),
	Sliding UMETA(DisplayName = "Sliding"),
	Lid    UMETA(DisplayName = "Lid")
};

UENUM(BlueprintType)
enum class EDoorOpenInput : uint8
{
	Forward UMETA(DisplayName = "Forward (W)"),
	Right   UMETA(DisplayName = "Right (D)"),
	Left    UMETA(DisplayName = "Left (A)")
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHidingEnter, APawn*, Pawn);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHidingExit, APawn*, Pawn);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoorTargetChanged, float, TargetAlpha);

UCLASS(ClassGroup = (BeyondDark), meta = (BlueprintSpawnableComponent))
class UHidingSpotComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UHidingSpotComponent();

	UPROPERTY(EditAnywhere, Category = "Hiding|Setup")
	FComponentReference EntryPointRef;

	UPROPERTY(EditAnywhere, Category = "Hiding|Setup")
	FComponentReference ExitPointRef;

	UPROPERTY(EditAnywhere, Category = "Hiding|Door")
	FComponentReference DoorRef;

	// ---- Resolved pointers (runtime, not editable) ----
	UPROPERTY(Transient) TObjectPtr<USceneComponent> EntryPoint = nullptr;
	UPROPERTY(Transient) TObjectPtr<USceneComponent> ExitPoint = nullptr;
	UPROPERTY(Transient) TObjectPtr<USceneComponent> DoorComponent = nullptr;


	/** Movement type for the “door” */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Hiding|Door")
	EHidingDoorType DoorType = EHidingDoorType::Hinged;

	/** Local-space open pose for the door (interpreted depending on DoorType) */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Hiding|Door", meta = (EditCondition = "DoorType==EHidingDoorType::Sliding", EditConditionHides))
	FVector SlideOffsetLocal = FVector(0, 0, 0);

	/** For Hinged/Lid: degrees of rotation when fully open (positive or negative ok) */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Hiding|Door", meta = (EditCondition = "DoorType==EHidingDoorType::Hinged || DoorType==EHidingDoorType::Lid", EditConditionHides))
	FRotator OpenRotationLocal = FRotator(0, 90, 0);

	/** Door animation speed (alpha per second) */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Hiding|Door")
	float DoorSpeed = 2.5f;

	/** Optional easing curve for door alpha [0..1] */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Hiding|Door")
	TObjectPtr<UCurveFloat> DoorCurve;

	/** Minimum open alpha required to allow entering */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Hiding|Rules")
	float MinOpenToEnter = 0.35f;

	/** Lock prevents opening/closing and entering/exiting (except forced) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hiding|Rules")
	bool bLocked = false;

	/** If true, we’ll temporarily disable the pawn’s movement when inside */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hiding|Rules")
	bool bDisablePawnMovementInside = true;

	/** If true, we’ll make the pawn harder to detect (AI integrations left to you) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hiding|Rules")
	bool bMarkPawnAsHiddenForAI = true;

	/** Current open [0..1] */
	UPROPERTY(BlueprintReadOnly, Category = "Hiding|State")
	float OpenAlpha = 0.f;

	/** True if occupied */
	UPROPERTY(BlueprintReadOnly, Category = "Hiding|State")
	bool bIsOccupied = false;

	/** Who’s inside (if any) */
	UPROPERTY(BlueprintReadOnly, Category = "Hiding|State")
	TWeakObjectPtr<APawn> Occupant;

	/** Tries to toggle (close->open / open->close) */
	UFUNCTION(BlueprintCallable, Category = "Hiding|Control")
	void ToggleOpen();

	/** Command a new target alpha [0..1] */
	UFUNCTION(BlueprintCallable, Category = "Hiding|Control")
	void OpenTo(float Target);

	/** Is it safe/allowed to enter now? */
	UFUNCTION(BlueprintCallable, Category = "Hiding|Rules")
	bool CanEnter(APawn* Pawn) const;

	/** Begin hiding sequence (snaps pawn, closes door if desired) */
	UFUNCTION(BlueprintCallable, Category = "Hiding|Control")
	bool Enter(APawn* Pawn, bool bAutoClose = true);

	/** Exit sequence */
	UFUNCTION(BlueprintCallable, Category = "Hiding|Control")
	bool Exit(bool bAutoOpen = true);

	/** Forces release even if locked (use with care) */
	UFUNCTION(BlueprintCallable, Category = "Hiding|Control")
	bool ForceExit();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hiding|Exit")
	bool bUseSmoothExit = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hiding|Exit", meta = (ClampMin = "0.05", UIMin = "0.1", UIMax = "2.0"))
	float AutoExitDuration = 0.55f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hiding|Exit")
	TObjectPtr<UCurveFloat> AutoExitEase = nullptr; // optional

	/** How open the door should be while exiting (0..1). 1 = fully open. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hiding|Exit", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float ExitTargetOpenAlpha = 1.0f;

	/** Keep the door from relaxing for a short time after exit completes. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hiding|Exit", meta = (ClampMin = "0.0", UIMin = "0.0", UIMax = "1.0"))
	float ExitDoorHoldTime = 0.15f;

	// --- Runtime (exit animation) ---
	bool  bPlayingAutoExit = false;
	float AutoExitT = 0.f;
	TWeakObjectPtr<APawn> AutoExitPawn;
	FVector  ExitStartLoc;  FRotator ExitStartRot;
	FVector  ExitEndLoc;    FRotator ExitEndRot;
	float   ExitRelaxTimer = 0.f;

	UFUNCTION(BlueprintCallable, Category = "Hiding|Control")
	bool StartAutoExit(bool bAlsoOpenDoor = true);

	/** Blueprint events */
	UPROPERTY(BlueprintAssignable, Category = "Hiding|Events")
	FOnHidingEnter OnEnter;

	UPROPERTY(BlueprintAssignable, Category = "Hiding|Events")
	FOnHidingExit OnExit;

	UPROPERTY(BlueprintAssignable, Category = "Hiding|Events")
	FOnDoorTargetChanged OnDoorTargetChanged;

	// ---- Config you can tune per spot ----
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hiding|Door")
	EDoorOpenInput OpenInputMode = EDoorOpenInput::Forward;

	/** Ignore tiny stick/keyboard noise */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hiding|Door")
	float InputDeadzone = 0.12f;

	UFUNCTION(BlueprintCallable, Category = "Hiding|Peek")
	void GetPeekForPawn(APawn* Pawn, FVector& OutLocalOffset, float& OutYawAddDegrees) const;

	// Tap-to-hide glide
	UFUNCTION(BlueprintCallable, Category = "Hiding|Control")
	bool StartAutoEnter(APawn* Pawn);

	// Drive door by a single scalar axis while hidden (Axis in [-1,1])
	UFUNCTION(BlueprintCallable, Category = "Hiding|Control")
	void DriveDoorWhileHidden(float Axis, float DeltaSeconds);

	// --- Outlast-style control & auto-enter options ---
	UPROPERTY(EditAnywhere, Category = "Hiding|Door")
	float DoorDriveSpeed = 0.9f;          // alpha/sec when you "push" the door

	UPROPERTY(EditAnywhere, Category = "Hiding|Door")
	float DoorRelaxCloseSpeed = 0.6f;     // alpha/sec back toward closed when released

	UPROPERTY(EditAnywhere, Category = "Hiding|Enter")
	float AutoEnterDuration = 0.6f;       // seconds to glide into the spot

	UPROPERTY(EditAnywhere, Category = "Hiding|Enter")
	TObjectPtr<UCurveFloat> AutoEnterEase; // optional ease curve

	// Runtime state
	bool bDrivingDoor = false;            // when player is holding the door
	bool bPlayingAutoEnter = false;
	float AutoEnterT = 0.f;
	TWeakObjectPtr<APawn> AutoEnterPawn;
	FVector EnterStartLoc;  FRotator EnterStartRot;

	// API
	UFUNCTION(BlueprintCallable, Category = "Hiding|Control")
	void BeginDoorManipulation(APawn* ByPawn);

	UFUNCTION(BlueprintCallable, Category = "Hiding|Control")
	void DriveDoorAxis(float Axis, float DeltaTime);   // Axis in [-1,1]

	UFUNCTION(BlueprintCallable, Category = "Hiding|Control")
	void EndDoorManipulation();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hiding|Peek")
	float PeekMaxDistance = 16.f;

	// How much to yaw the camera (look past the door) at full open
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hiding|Peek")
	float PeekYawMaxDegrees = 12.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hiding|Peek")
	TObjectPtr<UCurveFloat> PeekCurve;

	UPROPERTY(EditAnywhere, Category = "Hiding|Setup")
	FComponentReference SeatPointRef;

	// Optional: use this as the basis for peek direction; if unset we use DoorComponent (fallback Root)
	UPROPERTY(EditAnywhere, Category = "Hiding|Peek")
	FComponentReference PeekDirBasisRef;

	// Resolved at runtime (not editable)
	UPROPERTY(Transient) TObjectPtr<USceneComponent> SeatPoint = nullptr;
	UPROPERTY(Transient) TObjectPtr<USceneComponent> PeekDirBasis = nullptr;

#if WITH_EDITOR
	/** Quick helpers while setting up: capture the current local as CLOSED/OPEN refs */
	UFUNCTION(CallInEditor, Category = "Hiding|Editor")
	void SnapClosedFromCurrent();

	UFUNCTION(CallInEditor, Category = "Hiding|Editor")
	void SnapOpenFromCurrent();
#endif

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	// Internal target and cached transforms
	float TargetAlpha = 0.f;

	FTransform DoorClosedLocal; // captured at BeginPlay
	FTransform DoorOpenLocal;   // synthesized from options at BeginPlay

	// Helpers
	void ApplyDoorPose(float InAlpha);
	void MovePawnInto(APawn* Pawn);
	void MovePawnOut(APawn* Pawn);
	void SetPawnHiddenState(APawn* Pawn, bool bHidden);
	void SetPawnMovementEnabled(APawn* Pawn, bool bEnabled);
};
