#include "NoSunMoonBPLib.h"



FRuntimeCurveLinearColor UNoSunMoonBPLib::SetCurveColor(FRuntimeCurveLinearColor TargetCurve, float newr, float newg, float newb)
{
  //if (TargetCurve != nullptr) {
    TargetCurve.ColorCurves[0].UpdateOrAddKey(0.0f, newr);
    TargetCurve.ColorCurves[1].UpdateOrAddKey(0.0f, newg);
    TargetCurve.ColorCurves[2].UpdateOrAddKey(0.0f, newb);
    TargetCurve.ColorCurves[0].UpdateOrAddKey(1.0f, newr);
    TargetCurve.ColorCurves[1].UpdateOrAddKey(1.0f, newg);
    TargetCurve.ColorCurves[2].UpdateOrAddKey(1.0f, newb);
    if (TargetCurve.ExternalCurve != nullptr) {
      TargetCurve.ExternalCurve->FloatCurves[0].UpdateOrAddKey(0.0f, newr);
      TargetCurve.ExternalCurve->FloatCurves[1].UpdateOrAddKey(0.0f, newg);
      TargetCurve.ExternalCurve->FloatCurves[2].UpdateOrAddKey(0.0f, newb);
      TargetCurve.ExternalCurve->FloatCurves[0].UpdateOrAddKey(1.0f, newr);
      TargetCurve.ExternalCurve->FloatCurves[1].UpdateOrAddKey(1.0f, newg);
      TargetCurve.ExternalCurve->FloatCurves[2].UpdateOrAddKey(1.0f, newb);
    }
    return TargetCurve;
  //}
}

FRuntimeFloatCurve UNoSunMoonBPLib::SetCurveFloat(FRuntimeFloatCurve TargetFCurve, float timeat, float newv)
{
  if (TargetFCurve.ExternalCurve != nullptr) {
    TargetFCurve.ExternalCurve->FloatCurve.UpdateOrAddKey(timeat, newv);
  }
  return TargetFCurve;
}
