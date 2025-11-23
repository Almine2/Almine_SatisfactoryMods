#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Misc/FileHelper.h"
#include "PioneerPathRecorderBPLib.generated.h"


UCLASS()
class PIONEERPATHRECORDER_API UPioneerPathRecorderBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "PioneerPathRecorder")
	static void AppendPathFile(FString TextToWrite, FString FileName);

	UFUNCTION(BlueprintCallable, Category = "PioneerPathRecorder")
	static bool LoadFileToArray(FString FileName, TArray<FString>& Result);

	UFUNCTION(BlueprintCallable, Category = "PioneerPathRecorder")
	static bool CheckPath(FString FileName);
	
};