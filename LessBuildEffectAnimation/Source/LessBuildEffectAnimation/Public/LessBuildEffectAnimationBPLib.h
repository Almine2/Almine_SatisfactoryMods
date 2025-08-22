#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Hologram/FGBuildableHologram.h"
#include "LessBuildEffectAnimationBPLib.generated.h"


UCLASS()
class LESSBUILDEFFECTANIMATION_API ULessBuildEffectAnimationBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "LessBuildEffectAnimation")
	static void SetSuppress(AFGBuildableHologram* targetHologram, bool supress);
	
	UFUNCTION(BlueprintCallable, Category = "LessBuildEffectAnimation")
	static void SetTotalThrowDuration(AFGBuildEffectActor* targetEffectActor, float dur);

	UFUNCTION(BlueprintCallable, Category = "LessBuildEffectAnimation")
	static bool GetIsBlueprint(AFGBuildEffectActor* targetEffectActor);

	UFUNCTION(BlueprintCallable, Category = "LessBuildEffectAnimation")
	static void ProcessBuildEffectFallback(AFGBuildEffectActor* targetEffectActor);

	UFUNCTION(BlueprintCallable, Category = "LessBuildEffectAnimation")
	static void CallBuildEffectEnded(AFGBuildEffectActor* targetEffectActor);

	UFUNCTION(BlueprintCallable, Category = "LessBuildEffectAnimation")
	static void CallPlayBuildFinishedEffect(AFGBuildEffectActor* targetEffectActor);
};