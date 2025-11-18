#include "MonsterCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MonsterAwarenessComponent.h"
#include "Animation/AnimInstance.h"

AMonsterCharacter::AMonsterCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	// Awareness component the AI will read from
	Awareness = CreateDefaultSubobject<UMonsterAwarenessComponent>(TEXT("Awareness"));

	// Initial movement speed (will be reset in BeginPlay to respect any BP overrides)
	if (UCharacterMovementComponent* MoveComp = GetCharacterMovement())
	{
		MoveComp->MaxWalkSpeed = WalkSpeed;
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
	if (UCharacterMovementComponent* MoveComp = GetCharacterMovement())
	{
		MoveComp->MaxWalkSpeed = bRushing ? RushSpeed : WalkSpeed;
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
