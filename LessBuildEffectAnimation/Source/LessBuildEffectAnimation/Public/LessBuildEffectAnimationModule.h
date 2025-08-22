#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include <SubsystemActorManager.h>
#include "FGRecipeManager.h"

class FLessBuildEffectAnimationModule : public IModuleInterface {
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	class AFGRecipeManager* RecipeManager;
};