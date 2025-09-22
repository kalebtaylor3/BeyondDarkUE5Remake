#include "StickyMovementInputComponent.h"
#include "Curves/CurveFloat.h"

static bool IsDigitalLike(const FVector2D& Raw)
{
	return Raw.Length() > 0.98f || (FMath::IsNearlyZero(Raw.X) ^ FMath::IsNearlyZero(Raw.Y));
}

FVector2D UStickyMovementInputComponent::UpdateAndGetSmoothed(const FVector2D& RawInput, float DT)
{
	// Target magnitude: keyboard -> 1, analog -> stick length, released -> 0
	const float TargetLen = RawInput.IsNearlyZero()
		? 0.f
		: (IsDigitalLike(RawInput) ? 1.f : FMath::Clamp(RawInput.Length(), 0.f, 1.f));

	const float CurrentLen = Smoothed.Length();
	const bool bSpeedingUp = TargetLen > CurrentLen;

	// Update / keep a stable direction
	if (!RawInput.IsNearlyZero())
	{
		LastDir = RawInput.GetSafeNormal();
	}
	FVector2D Dir = bSpeedingUp ? RawInput.GetSafeNormal() : (LastDir.IsNearlyZero() ? Smoothed.GetSafeNormal() : LastDir);
	if (Dir.IsNearlyZero())
	{
		Smoothed = FVector2D::ZeroVector;
		return Smoothed;
	}

	float NewLen = CurrentLen;

	if (bSpeedingUp)
	{
		// ACCEL: per-frame alpha shaped by AccelAlphaCurve
		float Alpha = FMath::Clamp(AccelRate * DT, 0.f, 1.f);
		if (AccelAlphaCurve) Alpha = FMath::Clamp(AccelAlphaCurve->GetFloatValue(Alpha), 0.f, 1.f);
		NewLen = FMath::Lerp(CurrentLen, TargetLen, Alpha);
	}
	else
	{
		// DECEL: per-frame alpha shaped by DecelAlphaCurve
		float Alpha = FMath::Clamp(DecelRate * DT, 0.f, 1.f);

		// Make decel alpha depend a bit on how fast you're currently going (optional but nice):
		// Sample the curve with current normalized speed (0..1).
		if (DecelAlphaCurve)
		{
			const float Scale = FMath::Clamp(DecelAlphaCurve->GetFloatValue(FMath::Clamp(CurrentLen, 0.f, 1.f)), 0.f, 1.f);
			Alpha *= Scale; // keep in 0..1
		}

		NewLen = FMath::Lerp(CurrentLen, TargetLen, Alpha);

		// Snap to zero near rest so we actually stop
		if (TargetLen == 0.f && NewLen < StopEpsilon)
		{
			Smoothed = FVector2D::ZeroVector;
			return Smoothed;
		}
	}

	Smoothed = Dir * NewLen;
	return Smoothed;
}