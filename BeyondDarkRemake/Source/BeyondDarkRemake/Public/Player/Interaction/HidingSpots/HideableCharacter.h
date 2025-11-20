// UHideableCharacter.h
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HideableCharacter.generated.h"

UINTERFACE(BlueprintType)
class UHideableCharacter : public UInterface
{
	GENERATED_BODY()
};

class IHideableCharacter
{
	GENERATED_BODY()

public:
	/** Called after the pawn has been snapped inside a hiding spot */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Hiding")
	void OnEnterHiding(class UHidingSpotComponent* Spot);

	/** Called right before the pawn is released from the hiding spot */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Hiding")
	void OnExitHiding(class UHidingSpotComponent* Spot);
};
