#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Hologram/FGWireHologram.h"
#include "HookingOnlyWireHologramBPLib.generated.h"


UCLASS()
class HOOKINGONLYWIREHOLOGRAM_API UHookingOnlyWireHologramBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "HookingOnlyWireHologram")
	static void AutomaticGeneratePoles(AFGWireHologram* targetHolo, bool DoAuto);

	UFUNCTION(BlueprintCallable, Category = "HookingOnlyWireHologram")
	static void CallOnAutomaticPoleDisableToggle(AFGWireHologram* targetHolo, bool DoDisable);

	UFUNCTION(BlueprintCallable, Category = "HookingOnlyWireHologram")
	static void SetMustSnuptoAttachment(AFGWireHologram* targetHolo, bool DoAttach);

	UFUNCTION(BlueprintCallable, Category = "HookingOnlyWireHologram")
	static int32 GetCurrentConnection(AFGWireHologram* targetHolo);

};