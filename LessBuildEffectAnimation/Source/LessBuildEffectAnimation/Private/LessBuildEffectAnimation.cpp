#include "LessBuildEffectAnimationModule.h"
#include "FGBlueprintHologram.h"
#include "FGBuildable.h"
#include "FGBuildEffectActor.h"
#include "Hologram/FGBuildableHologram.h"
#include "Patching/NativeHookManager.h"

void FLessBuildEffectAnimationModule::StartupModule() {
  if (WITH_EDITOR)
  {
    return;
  }
  //UWorld* world = GetWorld();
  /*SUBSCRIBE_METHOD_VIRTUAL(AFGBlueprintHologram::PreHologramPlacement, GetMutableDefault<AFGBlueprintHologram>(), [](auto& scope, AFGBlueprintHologram* self, const FHitResult& hitResult) {
    //AFGBuildable* b = self->mBuildableToNewRoot.GetKeys()
    for (auto& Elem : self->mBuildableToNewRoot) {
      Elem.Key->mSkipBuildEffect = (uint8)1;
      Elem.Key->mBuildEffectSpeed = 0.03f;
    }
  });*/
  //SUBSCRIBE_METHOD_VIRTUAL_AFTER(AFGBlueprintHologram::Construct, GetMutableDefault<AFGBlueprintHologram>(), [](AActor* returnValue, AFGBlueprintHologram* hologram, TArray< AActor* >& out_children, FNetConstructionID NetConstructionID){
  //SUBSCRIBE_METHOD_VIRTUAL(AFGBlueprintHologram::Construct, GetMutableDefault<AFGBlueprintHologram>(), [](auto& scope, AFGBlueprintHologram* self, TArray< AActor* >& out_children, FNetConstructionID NetConstructionID) {
    //for (auto child : out_children) {
      //if (auto buildable = Cast<AFGBuildable>(child)) {
        //FindAndLinkForBuildable(buildable);
        //buildable->mHideOnBuildEffectStart = false;
        //buildable->mSkipBuildEffect = (uint8)1;
        //buildable->mBuildEffectSpeed = 0.03f;
        //buildable->OnBuildEffectFinished();
        //buildable->OnMaterialInstancesUpdated();

        //TODO : get AFGRecipeManager from subsystem actor
        //if (RecipeManager == nullptr) {
        //  RecipeManager = AFGRecipeManager::Get(buildable->GetWorld());
        //}
        //AFGRecipeManager* rm = AFGRecipeManager::Get(buildable->GetWorld());
        //TArray<TSubclassOf<UFGRecipe>> r = rm->GetAllRecipes();
        //buildable->GetBuildEffectActor()->SetRecipe(r[2], nullptr);
        //AFGBuildEffectActor* ea = buildable->GetBuildEffectActor();
        //ea->mShouldDelayBelts = false;
        //ea->splineBuildEffectSpeed = 0.03f;
        //ea->Stop();
      //}
    //}
  //});//
  /*SUBSCRIBE_METHOD_VIRTUAL(AFGBlueprintHologram::Construct, GetMutableDefault<AFGBlueprintHologram>(), [](TArray< AActor* >& out_children, FNetConstructionID NetConstructionID) {

      for (auto child : out_children){
        if (auto buildable = Cast<AFGBuildable>(child)){
          //FindAndLinkForBuildable(buildable);
          //buildable->mHideOnBuildEffectStart = true;
          //buildable->mSkipBuildEffect = (uint8)1;
          //buildable->mBuildEffectSpeed = 0.03f;

          //TODO : get AFGRecipeManager from subsystem actor
          //if (RecipeManager == nullptr) {
          //  RecipeManager = AFGRecipeManager::Get(buildable->GetWorld());
          //}
          //AFGRecipeManager* rm = AFGRecipeManager::Get(buildable->GetWorld());
          //TArray<TSubclassOf<UFGRecipe>> r = rm->GetAllRecipes();
          //buildable->GetBuildEffectActor()->SetRecipe(*r[1], nullptr);
          AFGBuildEffectActor* ea = buildable->GetBuildEffectActor();
          ea->K2_DestroyActor();
          //ea->mShouldDelayBelts = false;
         // ea->splineBuildEffectSpeed = 0.03f;
        }
      }
    });
    */
}

void FLessBuildEffectAnimationModule::ShutdownModule(){

}

IMPLEMENT_GAME_MODULE(FLessBuildEffectAnimationModule, LessBuildEffectAnimation);