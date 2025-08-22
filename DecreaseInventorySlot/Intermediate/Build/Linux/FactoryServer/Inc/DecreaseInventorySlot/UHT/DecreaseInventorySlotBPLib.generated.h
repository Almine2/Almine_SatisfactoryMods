// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DecreaseInventorySlotBPLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGUnlockSubsystem;
class UFGInventoryComponent;
class UFGInventoryComponentEquipment;
#ifdef DECREASEINVENTORYSLOT_DecreaseInventorySlotBPLib_generated_h
#error "DecreaseInventorySlotBPLib.generated.h already included, missing '#pragma once' in DecreaseInventorySlotBPLib.h"
#endif
#define DECREASEINVENTORYSLOT_DecreaseInventorySlotBPLib_generated_h

#define FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_13_SPARSE_DATA
#define FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDIS_SetActiveEquipmentIndex); \
	DECLARE_FUNCTION(execDIS_SetNumAdditionalArmEquipmentSlots); \
	DECLARE_FUNCTION(execDIS_SetNumTotalArmEquipmentSlots); \
	DECLARE_FUNCTION(execDIS_SetNumOfAdditionalInventorySlots); \
	DECLARE_FUNCTION(execDIS_SetNumTotalInventorySlots); \
	DECLARE_FUNCTION(execDIS_SetAdjustedSizeDiff); \
	DECLARE_FUNCTION(execDIS_SetDefaultSize);


#define FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_13_ACCESSORS
#define FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDecreaseInventorySlotBPLib(); \
	friend struct Z_Construct_UClass_UDecreaseInventorySlotBPLib_Statics; \
public: \
	DECLARE_CLASS(UDecreaseInventorySlotBPLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DecreaseInventorySlot"), NO_API) \
	DECLARE_SERIALIZER(UDecreaseInventorySlotBPLib)


#define FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDecreaseInventorySlotBPLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDecreaseInventorySlotBPLib(UDecreaseInventorySlotBPLib&&); \
	NO_API UDecreaseInventorySlotBPLib(const UDecreaseInventorySlotBPLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDecreaseInventorySlotBPLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDecreaseInventorySlotBPLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDecreaseInventorySlotBPLib) \
	NO_API virtual ~UDecreaseInventorySlotBPLib();


#define FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_10_PROLOG
#define FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_13_SPARSE_DATA \
	FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_13_ACCESSORS \
	FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_13_INCLASS_NO_PURE_DECLS \
	FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DECREASEINVENTORYSLOT_API UClass* StaticClass<class UDecreaseInventorySlotBPLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
