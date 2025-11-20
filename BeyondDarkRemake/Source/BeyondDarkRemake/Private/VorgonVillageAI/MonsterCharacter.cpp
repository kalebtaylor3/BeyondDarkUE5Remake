#include "VorgonVillageAI/MonsterCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "VorgonVillageAI/MonsterAwarenessComponent.h"
#include "Animation/AnimInstance.h"

AMonsterCharacter::AMonsterCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	// Awareness component the AI will read from
	Awareness = CreateDefaultSubobject<UMonsterAwarenessComponent>(TEXT("Awareness"));

	// Initial movement speed (will be reset in BeginPlay to respect any BP overrides)
	if (UCharacterMovementComponent* MoveComp = GetCharacterMovement())
	{
		MoveComp->MaxWalkSpeed = PatrolSpeed;
	}
}

void AMonsterCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Start in stalking / walk mode by default
	SetRushing(false);
}

void AMonsterCharacter::SetRushing(bool bRushing)
{
	if (UCharacterMovementComponent* Move = GetCharacterMovement())
	{
		Move->MaxWalkSpeed = bRushing ? ChaseSpeed : PatrolSpeed;
	}
}

void AMonsterCharacter::ApplyMovementSpeed(float NewSpeed)
{
	if (UCharacterMovementComponent* Move = GetCharacterMovement())
	{
		Move->MaxWalkSpeed = NewSpeed;
	}
}

void AMonsterCharacter::PlayScareMontage()
{
	if (Montage_Scare)
	{
		if (UAnimInstance* AnimInstance = GetMesh() ? GetMesh()->GetAnimInstance() : nullptr)
		{
			AnimInstance->Montage_Play(Montage_Scare);
		}
	}
}

void AMonsterCharacter::PlayRipOutMontage()
{
	if (Montage_RipOut)
	{
		if (UAnimInstance* AnimInstance = GetMesh() ? GetMesh()->GetAnimInstance() : nullptr)
		{
			AnimInstance->Montage_Play(Montage_RipOut);
		}
	}
}
