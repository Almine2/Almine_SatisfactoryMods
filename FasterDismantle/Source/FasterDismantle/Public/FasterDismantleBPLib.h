#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Equipment/FGBuildGunDismantle.h"
#include "FasterDismantleBPLib.generated.h"


UCLASS()
class FASTERDISMANTLE_API UFasterDismantleBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "QuickDismantle")
	static void SetLimit(UFGBuildGunStateDismantle* targetState, int32 Limit);
};