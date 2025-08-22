#include "BlueprintZooperBPLib.h"
#include "BlueprintZooperModule.h"

AActor* UBlueprintZooperBPLib::Construct(AFGBlueprintHologram* targetHologram, TArray<AActor*>& out_children)
{
  if (targetHologram != nullptr) {
    return targetHologram->Construct(out_children, targetHologram->GetLocalPendingConstructionID());
  } else {
    return nullptr;
  }
}

FBox UBlueprintZooperBPLib::GetLocalBoundBox(AFGBlueprintHologram* targetHologram)
{
  if (targetHologram != nullptr) {
    return targetHologram->mLocalBounds;
  }
  return FBox();
}

FVector UBlueprintZooperBPLib::GetLocalBoundsOffset(AFGBlueprintHologram* targetHologram)
{
  if (targetHologram != nullptr) {
    return targetHologram->mLocalBoundsOffset;
  }
  return FVector();
}

void UBlueprintZooperBPLib::LoadBlueprintToOtherWorld(AFGBlueprintHologram* targetHologram)
{
  if (targetHologram != nullptr) {
    targetHologram->LoadBlueprintToOtherWorld();
  }
}

void UBlueprintZooperBPLib::SetBlueprintDescriptor(AFGBlueprintHologram* targetHologram, UFGBlueprintDescriptor* blueprintDesc)
{
  if (targetHologram != nullptr) {
    targetHologram->SetBlueprintDescriptor(blueprintDesc);
  }
}

void UBlueprintZooperBPLib::SetActorHiddenInGame(AFGBlueprintHologram* targetHologram, bool newHidden)
{
  if (targetHologram != nullptr) {
    targetHologram->SetActorHiddenInGame(newHidden);
  }
}

int32 UBlueprintZooperBPLib::GetScrollRotateValue(AFGBlueprintHologram* targetHologram)
{
  if (targetHologram != nullptr) {
    return targetHologram->GetScrollRotateValue();
  }
  return int32();
}

void UBlueprintZooperBPLib::SetScrollRotateValue(AFGBlueprintHologram* targetHologram, int32 rotValue)
{
  if (targetHologram != nullptr) {
    targetHologram->SetScrollRotateValue(rotValue);
  }
}

void UBlueprintZooperBPLib::UpdateRotationValuesFromTransform(AFGBlueprintHologram* targetHologram)
{
  if (targetHologram != nullptr) {
    targetHologram->UpdateRotationValuesFromTransform();
  }
}

void UBlueprintZooperBPLib::Scroll(AFGBlueprintHologram* targetHologram, int32 delta)
{
  if (targetHologram != nullptr) {
    targetHologram->Scroll(delta);
  }
}

float UBlueprintZooperBPLib::ApplyScrollRotationTo(AFGBlueprintHologram* targetHologram, float base, bool onlyUseBaseForAlignment)
{
  if (targetHologram != nullptr) {
    return targetHologram->ApplyScrollRotationTo(base, onlyUseBaseForAlignment);
  }
  return 0.0f;
}

int32 UBlueprintZooperBPLib::GetRotationStep(AFGBlueprintHologram* targetHologram)
{
  if (targetHologram != nullptr) {
    return targetHologram->GetRotationStep();
  }
  return int32();
}

void UBlueprintZooperBPLib::SetHologramLocationAndRotation(AFGBlueprintHologram* targetHologram, const FHitResult& hitResult)
{
  if (targetHologram != nullptr) {
    targetHologram->SetHologramLocationAndRotation(hitResult);
  }
}

FHitResult UBlueprintZooperBPLib::GetHitResultFromBuildGun(AFGBuildGun* targetGun)
{
  if (targetGun != nullptr) {
    return targetGun->GetHitResult();
  }
  return FHitResult();
}

AFGHologram* UBlueprintZooperBPLib::DoSpawnHologramFromRecipe(TSubclassOf<class UFGRecipe> inRecipe, AActor* hologramOwner, const FVector& spawnLocation, APawn* hologramInstigator)
{
  return AFGHologram::SpawnHologramFromRecipe(inRecipe, hologramOwner, spawnLocation, hologramInstigator);
}
