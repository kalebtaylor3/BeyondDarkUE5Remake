#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MonsterCharacter.generated.h"

class UMonsterAwarenessComponent;
class UAnimMontage;

UCLASS()
class AMonsterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMonsterCharacter();

	// --- Components ---

	// Awareness / perception state used by the AI controller + behavior tree
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	UMonsterAwarenessComponent* Awareness;

	// --- Animations ---

	// Angry / scare montage (used when monster loses player, etc.)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animations")
	UAnimMontage* Montage_Scare = nullptr;

	// Kill / rip-out montage
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animations")
	UAnimMontage* Montage_RipOut = nullptr;

	// --- Movement ---

	// Default stalking / patrol speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float WalkSpeed = 200.f;

	// High-speed chase / rush speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float RushSpeed = 540.f;

	// Helper to switch between walk / rush speeds
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void SetRushing(bool bRushing);

	// Helpers so BT tasks / blueprints can trigger montages easily
	UFUNCTION(BlueprintCallable, Category = "Animations")
	void PlayScareMontage();

	UFUNCTION(BlueprintCallable, Category = "Animations")
	void PlayRipOutMontage();

protected:
	virtual void BeginPlay() override;
};
