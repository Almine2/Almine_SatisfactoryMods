#include "PioneerPathRecorderBPLib.h"
#include "PioneerPathRecorder.h"

void UPioneerPathRecorderBPLib::AppendPathFile(FString TextToWrite, FString FileName)
{
  //FText errorreason;
  FString PathToFile = FPaths::ProjectSavedDir() + FileName;
  if (FileName.IsEmpty()/*|| !FFileHelper::IsFilenameValidForSaving(FileName, errorreason)*/) {
    return;
  } else {
    FFileHelper::SaveStringToFile(TEXT("\n") + TextToWrite, *PathToFile, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);
  }
}

bool UPioneerPathRecorderBPLib::LoadFileToArray(FString FileName, TArray<FString>& Result)
{
  if (FileName.IsEmpty()) {
    return false;
  } else {
    FString PathToFile = FPaths::ProjectSavedDir() + FileName;
    //TArray<FString> res;
    return FFileHelper::LoadFileToStringArray(Result, *PathToFile);
  }
}

bool UPioneerPathRecorderBPLib::CheckPath(FString FileName)
{
  if (FileName.IsEmpty()) {
    return false;
  } else {
    FString PathToFile = FPaths::ProjectSavedDir() + FileName;
    return FPaths::ValidatePath(PathToFile);
  }
}
