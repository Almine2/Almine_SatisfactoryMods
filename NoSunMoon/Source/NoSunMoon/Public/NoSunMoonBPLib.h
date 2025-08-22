#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Curves/CurveLinearColor.h"
#include "NoSunMoonBPLib.generated.h"


UCLASS()
class NOSUNMOON_API UNoSunMoonBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "NoSunMoon")
	static FRuntimeCurveLinearColor SetCurveColor(FRuntimeCurveLinearColor TargetCurve, float newr, float newg, float newb);

	UFUNCTION(BlueprintCallable, Category = "NoSunMoon")
	static FRuntimeFloatCurve SetCurveFloat(FRuntimeFloatCurve TargetFCurve, float timeat, float newv);
};