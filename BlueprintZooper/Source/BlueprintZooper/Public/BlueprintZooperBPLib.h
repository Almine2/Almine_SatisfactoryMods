#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Hologram/FGHologram.h"
#include "Hologram/FGBlueprintHologram.h"
#include "Equipment/FGBuildGun.h"
#include "BlueprintZooperBPLib.generated.h"


UCLASS()
class BLUEPRINTZOOPER_API UBlueprintZooperBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/**
 * Construct the real deal.
 * @param out_children All children constructed, if any.
 * @return The constructed actor; nullptr on failure.
 */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Zooper")
	static AActor* Construct(AFGBlueprintHologram* targetHologram, TArray< AActor* >& out_children);

	UFUNCTION(BlueprintCallable, Category = "Blueprint Zooper")
	static FBox GetLocalBoundBox(AFGBlueprintHologram* targetHologram);

	UFUNCTION(BlueprintCallable, Category = "Blueprint Zooper")
	static FVector GetLocalBoundsOffset(AFGBlueprintHologram* targetHologram);

	UFUNCTION(BlueprintCallable, Category = "Blueprint Zooper")
	static void LoadBlueprintToOtherWorld(AFGBlueprintHologram* targetHologram);

	UFUNCTION(BlueprintCallable, Category = "Blueprint Zooper")
	static void SetBlueprintDescriptor(AFGBlueprintHologram* targetHologram, class UFGBlueprintDescriptor* blueprintDesc);

	UFUNCTION(BlueprintCallable, Category = "Blueprint Zooper")
	static void SetActorHiddenInGame(AFGBlueprintHologram* targetHologram, bool newHidden);

	UFUNCTION(BlueprintCallable, Category = "Blueprint Zooper")
	static int32 GetScrollRotateValue(AFGBlueprintHologram* targetHologram);

	UFUNCTION(BlueprintCallable, Category = "Blueprint Zooper")
	static void SetScrollRotateValue(AFGBlueprintHologram* targetHologram, int32 rotValue);

	UFUNCTION(BlueprintCallable, Category = "Blueprint Zooper")
	static void UpdateRotationValuesFromTransform(AFGBlueprintHologram* targetHologram);

	UFUNCTION(BlueprintCallable, Category = "Blueprint Zooper")
	static void Scroll(AFGBlueprintHologram* targetHologram, int32 delta);

	UFUNCTION(BlueprintCallable, Category = "Blueprint Zooper")
	static float ApplyScrollRotationTo(AFGBlueprintHologram* targetHologram, float base, bool onlyUseBaseForAlignment = false);

	UFUNCTION(BlueprintCallable, Category = "Blueprint Zooper")
	static int32 GetRotationStep(AFGBlueprintHologram* targetHologram);

	UFUNCTION(BlueprintCallable, Category = "Blueprint Zooper")
	static void SetHologramLocationAndRotation(AFGBlueprintHologram* targetHologram, const FHitResult& hitResult);

	UFUNCTION(BlueprintCallable, Category = "Blueprint Zooper")
	static FHitResult GetHitResultFromBuildGun(AFGBuildGun* targetGun);

	UFUNCTION(BlueprintCallable, Category = "Blueprint Zooper")
	static AFGHologram* DoSpawnHologramFromRecipe(TSubclassOf< class UFGRecipe > inRecipe, AActor* hologramOwner, const FVector& spawnLocation, APawn* hologramInstigator = nullptr);
};