#include "HookingOnlyWireHologramBPLib.h"
#include "HookingOnlyWireHologram.h"

void UHookingOnlyWireHologramBPLib::AutomaticGeneratePoles(AFGWireHologram* targetHolo,bool DoAuto)
{
  if (targetHolo != nullptr) {
    targetHolo->mAutomaticWallPoleEnabled = DoAuto;
    targetHolo->mAutomaticPoleAvailable = DoAuto;
  }
}

void UHookingOnlyWireHologramBPLib::CallOnAutomaticPoleDisableToggle(AFGWireHologram* targetHolo, bool DoDisable)
{
  if (targetHolo != nullptr) {
    targetHolo->OnAutomaticPoleDisableToggle(DoDisable);
  }
}

void UHookingOnlyWireHologramBPLib::SetMustSnuptoAttachment(AFGWireHologram* targetHolo, bool DoAttach)
{
  if (targetHolo != nullptr) {
    targetHolo->mMustSnapToAttachmentPoint = DoAttach;
  }
}

int32 UHookingOnlyWireHologramBPLib::GetCurrentConnection(AFGWireHologram* targetHolo) {
  if (targetHolo != nullptr) {
    return targetHolo->mCurrentConnection;
  }
  else {
    return -1;
  }
}
