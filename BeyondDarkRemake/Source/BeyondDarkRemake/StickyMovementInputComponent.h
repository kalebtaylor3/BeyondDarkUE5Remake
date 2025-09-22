// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StickyMovementInputComponent.generated.h"


UCLASS(ClassGroup = (Movement), meta = (BlueprintSpawnableComponent))
class UStickyMovementInputComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "Sticky", meta = (ClampMin = "0.0"))
	float AccelRate = 10.f;

	UPROPERTY(EditAnywhere, Category = "Sticky", meta = (ClampMin = "0.0"))
	float DecelRate = 12.f; // per-frame alpha base for decel

	// Shapes per-frame alpha (0..1 -> 0..1)
	UPROPERTY(EditAnywhere, Category = "Sticky")
	UCurveFloat* AccelAlphaCurve = nullptr;

	UPROPERTY(EditAnywhere, Category = "Sticky")
	UCurveFloat* DecelAlphaCurve = nullptr;

	UPROPERTY(EditAnywhere, Category = "Sticky", meta = (ClampMin = "0.0"))
	float StopEpsilon = 0.02f;

	UFUNCTION(BlueprintCallable, Category = "Sticky")
	FVector2D UpdateAndGetSmoothed(const FVector2D& RawInput, float DeltaTime);

private:
	FVector2D Smoothed{ 0,0 };
	FVector2D LastDir{ 0,0 }; // stable direction while decelerating
};
