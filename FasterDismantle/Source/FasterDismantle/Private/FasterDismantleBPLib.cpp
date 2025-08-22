#include "FasterDismantleBPLib.h"
#include "FasterDismantle.h"

void UFasterDismantleBPLib::SetLimit(UFGBuildGunStateDismantle* targetState, int32 Limit)
{
  if (targetState != nullptr) {
    targetState->mCurrentMultiDismantleLimit = Limit;
  }
}
