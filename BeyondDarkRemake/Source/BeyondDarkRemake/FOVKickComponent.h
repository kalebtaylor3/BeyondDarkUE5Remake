// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FOVKickComponent.generated.h"


class UCameraComponent;

UCLASS(ClassGroup = (Camera), meta = (BlueprintSpawnableComponent))
class UFOVKickComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UFOVKickComponent();

	UPROPERTY(EditAnywhere, Category = "FOV")
	UCameraComponent* Camera = nullptr;

	UPROPERTY(EditAnywhere, Category = "FOV")
	float BaseFOV = 90.f;

	UPROPERTY(EditAnywhere, Category = "FOV")
	float SprintFOVAdd = 6.f;

	UPROPERTY(EditAnywhere, Category = "FOV")
	float EaseInSpeed = 6.f;

	UPROPERTY(EditAnywhere, Category = "FOV")
	float EaseOutSpeed = 5.f;

	/** Call from character when sprinting toggles */
	UFUNCTION(BlueprintCallable, Category = "FOV")
	void SetSprinting(bool bNowSprinting);

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	bool bSprinting = false;
	float TargetFOV = 90.f;
};
