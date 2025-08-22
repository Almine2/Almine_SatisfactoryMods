#include "LessBuildEffectAnimationBPLib.h"
#include "LessBuildEffectAnimationModule.h"
#include "FGBuildEffectActor.h"

void ULessBuildEffectAnimationBPLib::SetSuppress(AFGBuildableHologram* targetHologram, bool supress)
{
  if (targetHologram != nullptr) {
    targetHologram->SetSuppressBuildEffect(supress);
    return;
  } else {
    return;
  }
}

void ULessBuildEffectAnimationBPLib::SetTotalThrowDuration(AFGBuildEffectActor* targetEffectActor, float dur)
{
  if (targetEffectActor != nullptr) {
    targetEffectActor->mTotalThrowDuration = dur;
    return;
  }
}

bool ULessBuildEffectAnimationBPLib::GetIsBlueprint(AFGBuildEffectActor* targetEffectActor)
{
  if (targetEffectActor != nullptr) {
    return targetEffectActor->mIsBlueprint;
  }
  return false;
}

void ULessBuildEffectAnimationBPLib::ProcessBuildEffectFallback(AFGBuildEffectActor* targetEffectActor)
{
  if (targetEffectActor != nullptr) {
    TObjectPtr<UMaterialInterface> listMI = targetEffectActor->mBuildEffectFallback;
    UMaterialInterface* mi = listMI.Get();
    
    
  }
}

void ULessBuildEffectAnimationBPLib::CallBuildEffectEnded(AFGBuildEffectActor* targetEffectActor)
{
  if (targetEffectActor != nullptr) {
    if (targetEffectActor->OnBuildEffectFinished.IsBound()) {
      targetEffectActor->OnBuildEffectFinished.Broadcast();
    }
    if (targetEffectActor->OnSplineBuildEffectFinished.IsBound()) {
      targetEffectActor->OnSplineBuildEffectFinished.Broadcast();
    }
  }
}

void ULessBuildEffectAnimationBPLib::CallPlayBuildFinishedEffect(AFGBuildEffectActor* targetEffectActor)
{
  if (targetEffectActor != nullptr) {
    targetEffectActor->PlayBuildFinishedEffect();
  }
}
