// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "BeyondDarkRemakeCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;
class UHidingSpotComponent;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class ABeyondDarkRemakeCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Mesh, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* SprintAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input|Hiding")
	UInputAction* InteractAction = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Input|Hiding")
	UInputAction* ToggleDoorAction = nullptr;

	UFUNCTION()
	void StartSprint();

	UFUNCTION()
	void StopSprint();

	UFUNCTION()
	void ClearMove();

	bool bApplyingMove = false;
	
public:
	ABeyondDarkRemakeCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Horror|Components")
	class UFirstPersonBobComponent* BobComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Horror|Components")
	class UFOVKickComponent* FOVKickComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Horror|Components")
	class UStickyMovementInputComponent* StickyMoveComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Horror|Components")
	class ULookSwayComponent* LookSwayComp = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Horror|Components")
	class UDirectionalLeanComponent* LeanComp = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Horror|State")
	bool bIsSprinting = false;

	UPROPERTY(EditAnywhere, Category = "Horror|Speed")
	float WalkSpeedBase = 250.f;

	UPROPERTY(EditAnywhere, Category = "Horror|Speed")
	float SprintSpeedBase = 420.f;

	UPROPERTY(EditAnywhere, Category = "Horror|Speed")
	float ForwardMult = 1.00f;

	UPROPERTY(EditAnywhere, Category = "Horror|Speed")
	float StrafeMult = 0.70f;

	UPROPERTY(EditAnywhere, Category = "Horror|Speed")
	float BackwardMult = 0.55f;

	// Optional: different penalties while sprinting (feels more “survival horror”)
	UPROPERTY(EditAnywhere, Category = "Horror|Speed")
	float SprintStrafeMult = 0.65f;

	UPROPERTY(EditAnywhere, Category = "Horror|Speed")
	float SprintBackwardMult = 0.45f;

	// How quickly we blend between target speeds (heavier feel = lower)
	UPROPERTY(EditAnywhere, Category = "Horror|Speed")
	float SpeedInterpRate = 8.f;

	// === Crouch ===
	UPROPERTY(EditAnywhere, Category = "Horror|Crouch")
	bool bCrouchIsToggle = true;          // true = toggle, false = hold

	UPROPERTY(EditAnywhere, Category = "Horror|Crouch")
	float CrouchCapsuleHalfHeight = 60.f; // standing is 96 by default in your ctor

	UPROPERTY(EditAnywhere, Category = "Horror|Crouch")
	float CrouchCameraZ = -36.f;          // how far to lower the eye (cm)

	UPROPERTY(EditAnywhere, Category = "Horror|Crouch")
	float CrouchDownTime = 0.18f;

	UPROPERTY(EditAnywhere, Category = "Horror|Crouch")
	float CrouchUpTime = 0.20f;

	UPROPERTY(EditAnywhere, Category = "Horror|Crouch")
	UCurveFloat* CrouchEase = nullptr;    // X=t in [0..1], Y=alpha in [0..1]. If null, uses smoothstep.

	UPROPERTY(EditAnywhere, Category = "Horror|Crouch")
	float CrouchSpeedMult = 0.55f;        // extra slow while crouched (blended in smoothly)

	// (Optional) bind in editor
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* CrouchAction = nullptr;

	// runtime/state
	float StandCapsuleHalfHeight = 96.f;
	float CrouchPhase = 0.f;              // 0..1 time through transition
	bool  bWantsCrouch = false;

	void OnCrouchPressed();
	void OnCrouchReleased();
	void UpdateCrouch(float DT);

protected:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	virtual void Tick(float DeltaSeconds) override;

	virtual void BeginPlay() override;

protected:
	// APawn interface
	virtual void NotifyControllerChanged() override;
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

private:

	FVector2D RawMoveInput = FVector2D::ZeroVector;

	TWeakObjectPtr<UHidingSpotComponent> FocusedHidingSpot;

	/** If true, we’re currently inside a hiding spot */
	bool bIsHiddenInSpot = false;

	/** Trace for a HidingSpot under the crosshair */
	UHidingSpotComponent* TraceHidingSpot(float Distance = 250.f) const;

	/** Interact: enter/exit hiding */
	void OnInteract();

	/** Toggle door/lid open/close without entering */
	void OnToggleDoor();

	// Hiding
	bool bInteractHeld = false;
	double InteractPressTime = 0.0;
	TWeakObjectPtr<UHidingSpotComponent> DoorDriveSpot;

	// tweak
	static constexpr float InteractHoldThreshold = 0.20f; // seconds (tap < 0.2s = auto-enter)

	TWeakObjectPtr<class UHidingSpotComponent> CurrentHideSpot; // the one we’re inside

	FVector  CamRel_DefaultLoc = FVector::ZeroVector;
	FRotator CamRel_DefaultRot = FRotator::ZeroRotator;
	bool     bCamDefaultsSaved = false;

	FVector  PeekPrevLocalOffset = FVector::ZeroVector;
	float    PeekPrevYawAddDeg = 0.f;

};

