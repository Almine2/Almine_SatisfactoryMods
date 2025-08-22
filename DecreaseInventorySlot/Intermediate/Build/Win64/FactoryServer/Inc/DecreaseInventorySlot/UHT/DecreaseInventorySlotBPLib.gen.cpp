// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DecreaseInventorySlot/Public/DecreaseInventorySlotBPLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecreaseInventorySlotBPLib() {}
// Cross Module References
	DECREASEINVENTORYSLOT_API UClass* Z_Construct_UClass_UDecreaseInventorySlotBPLib();
	DECREASEINVENTORYSLOT_API UClass* Z_Construct_UClass_UDecreaseInventorySlotBPLib_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGUnlockSubsystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponentEquipment_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DecreaseInventorySlot();
// End Cross Module References
	DEFINE_FUNCTION(UDecreaseInventorySlotBPLib::execDIS_SetActiveEquipmentIndex)
	{
		P_GET_OBJECT(UFGInventoryComponentEquipment,Z_Param_TargetEquipmentComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDecreaseInventorySlotBPLib::DIS_SetActiveEquipmentIndex(Z_Param_TargetEquipmentComponent,Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecreaseInventorySlotBPLib::execDIS_SetNumAdditionalArmEquipmentSlots)
	{
		P_GET_OBJECT(AFGUnlockSubsystem,Z_Param_TargetUnlockSubsystem);
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDecreaseInventorySlotBPLib::DIS_SetNumAdditionalArmEquipmentSlots(Z_Param_TargetUnlockSubsystem,Z_Param_size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecreaseInventorySlotBPLib::execDIS_SetNumTotalArmEquipmentSlots)
	{
		P_GET_OBJECT(AFGUnlockSubsystem,Z_Param_TargetUnlockSubsystem);
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDecreaseInventorySlotBPLib::DIS_SetNumTotalArmEquipmentSlots(Z_Param_TargetUnlockSubsystem,Z_Param_size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecreaseInventorySlotBPLib::execDIS_SetNumOfAdditionalInventorySlots)
	{
		P_GET_OBJECT(AFGUnlockSubsystem,Z_Param_TargetUnlockSubsystem);
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDecreaseInventorySlotBPLib::DIS_SetNumOfAdditionalInventorySlots(Z_Param_TargetUnlockSubsystem,Z_Param_size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecreaseInventorySlotBPLib::execDIS_SetNumTotalInventorySlots)
	{
		P_GET_OBJECT(AFGUnlockSubsystem,Z_Param_TargetUnlockSubsystem);
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDecreaseInventorySlotBPLib::DIS_SetNumTotalInventorySlots(Z_Param_TargetUnlockSubsystem,Z_Param_size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecreaseInventorySlotBPLib::execDIS_SetAdjustedSizeDiff)
	{
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_TargetInventory);
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDecreaseInventorySlotBPLib::DIS_SetAdjustedSizeDiff(Z_Param_TargetInventory,Z_Param_size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecreaseInventorySlotBPLib::execDIS_SetDefaultSize)
	{
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_TargetInventory);
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDecreaseInventorySlotBPLib::DIS_SetDefaultSize(Z_Param_TargetInventory,Z_Param_size);
		P_NATIVE_END;
	}
	void UDecreaseInventorySlotBPLib::StaticRegisterNativesUDecreaseInventorySlotBPLib()
	{
		UClass* Class = UDecreaseInventorySlotBPLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DIS_SetActiveEquipmentIndex", &UDecreaseInventorySlotBPLib::execDIS_SetActiveEquipmentIndex },
			{ "DIS_SetAdjustedSizeDiff", &UDecreaseInventorySlotBPLib::execDIS_SetAdjustedSizeDiff },
			{ "DIS_SetDefaultSize", &UDecreaseInventorySlotBPLib::execDIS_SetDefaultSize },
			{ "DIS_SetNumAdditionalArmEquipmentSlots", &UDecreaseInventorySlotBPLib::execDIS_SetNumAdditionalArmEquipmentSlots },
			{ "DIS_SetNumOfAdditionalInventorySlots", &UDecreaseInventorySlotBPLib::execDIS_SetNumOfAdditionalInventorySlots },
			{ "DIS_SetNumTotalArmEquipmentSlots", &UDecreaseInventorySlotBPLib::execDIS_SetNumTotalArmEquipmentSlots },
			{ "DIS_SetNumTotalInventorySlots", &UDecreaseInventorySlotBPLib::execDIS_SetNumTotalInventorySlots },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics
	{
		struct DecreaseInventorySlotBPLib_eventDIS_SetActiveEquipmentIndex_Parms
		{
			UFGInventoryComponentEquipment* TargetEquipmentComponent;
			int32 index;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetEquipmentComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetEquipmentComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics::NewProp_TargetEquipmentComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics::NewProp_TargetEquipmentComponent = { "TargetEquipmentComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecreaseInventorySlotBPLib_eventDIS_SetActiveEquipmentIndex_Parms, TargetEquipmentComponent), Z_Construct_UClass_UFGInventoryComponentEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics::NewProp_TargetEquipmentComponent_MetaData), Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics::NewProp_TargetEquipmentComponent_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecreaseInventorySlotBPLib_eventDIS_SetActiveEquipmentIndex_Parms, index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics::NewProp_TargetEquipmentComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "DecreaseInventorySlot" },
		{ "ModuleRelativePath", "Public/DecreaseInventorySlotBPLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecreaseInventorySlotBPLib, nullptr, "DIS_SetActiveEquipmentIndex", nullptr, nullptr, Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics::DecreaseInventorySlotBPLib_eventDIS_SetActiveEquipmentIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics::DecreaseInventorySlotBPLib_eventDIS_SetActiveEquipmentIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics
	{
		struct DecreaseInventorySlotBPLib_eventDIS_SetAdjustedSizeDiff_Parms
		{
			UFGInventoryComponent* TargetInventory;
			int32 size;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetInventory;
		static const UECodeGen_Private::FIntPropertyParams NewProp_size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics::NewProp_TargetInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics::NewProp_TargetInventory = { "TargetInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecreaseInventorySlotBPLib_eventDIS_SetAdjustedSizeDiff_Parms, TargetInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics::NewProp_TargetInventory_MetaData), Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics::NewProp_TargetInventory_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecreaseInventorySlotBPLib_eventDIS_SetAdjustedSizeDiff_Parms, size), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics::NewProp_TargetInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics::NewProp_size,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics::Function_MetaDataParams[] = {
		{ "Category", "DecreaseInventorySlot" },
		{ "ModuleRelativePath", "Public/DecreaseInventorySlotBPLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecreaseInventorySlotBPLib, nullptr, "DIS_SetAdjustedSizeDiff", nullptr, nullptr, Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics::DecreaseInventorySlotBPLib_eventDIS_SetAdjustedSizeDiff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics::DecreaseInventorySlotBPLib_eventDIS_SetAdjustedSizeDiff_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics
	{
		struct DecreaseInventorySlotBPLib_eventDIS_SetDefaultSize_Parms
		{
			UFGInventoryComponent* TargetInventory;
			int32 size;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetInventory;
		static const UECodeGen_Private::FIntPropertyParams NewProp_size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics::NewProp_TargetInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics::NewProp_TargetInventory = { "TargetInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecreaseInventorySlotBPLib_eventDIS_SetDefaultSize_Parms, TargetInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics::NewProp_TargetInventory_MetaData), Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics::NewProp_TargetInventory_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecreaseInventorySlotBPLib_eventDIS_SetDefaultSize_Parms, size), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics::NewProp_TargetInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics::NewProp_size,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "DecreaseInventorySlot" },
		{ "ModuleRelativePath", "Public/DecreaseInventorySlotBPLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecreaseInventorySlotBPLib, nullptr, "DIS_SetDefaultSize", nullptr, nullptr, Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics::DecreaseInventorySlotBPLib_eventDIS_SetDefaultSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics::DecreaseInventorySlotBPLib_eventDIS_SetDefaultSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumAdditionalArmEquipmentSlots_Statics
	{
		struct DecreaseInventorySlotBPLib_eventDIS_SetNumAdditionalArmEquipmentSlots_Parms
		{
			AFGUnlockSubsystem* TargetUnlockSubsystem;
			int32 size;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetUnlockSubsystem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumAdditionalArmEquipmentSlots_Statics::NewProp_TargetUnlockSubsystem = { "TargetUnlockSubsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecreaseInventorySlotBPLib_eventDIS_SetNumAdditionalArmEquipmentSlots_Parms, TargetUnlockSubsystem), Z_Construct_UClass_AFGUnlockSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumAdditionalArmEquipmentSlots_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecreaseInventorySlotBPLib_eventDIS_SetNumAdditionalArmEquipmentSlots_Parms, size), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumAdditionalArmEquipmentSlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumAdditionalArmEquipmentSlots_Statics::NewProp_TargetUnlockSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumAdditionalArmEquipmentSlots_Statics::NewProp_size,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumAdditionalArmEquipmentSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "DecreaseInventorySlot" },
		{ "ModuleRelativePath", "Public/DecreaseInventorySlotBPLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumAdditionalArmEquipmentSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecreaseInventorySlotBPLib, nullptr, "DIS_SetNumAdditionalArmEquipmentSlots", nullptr, nullptr, Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumAdditionalArmEquipmentSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumAdditionalArmEquipmentSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumAdditionalArmEquipmentSlots_Statics::DecreaseInventorySlotBPLib_eventDIS_SetNumAdditionalArmEquipmentSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumAdditionalArmEquipmentSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumAdditionalArmEquipmentSlots_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumAdditionalArmEquipmentSlots_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumAdditionalArmEquipmentSlots_Statics::DecreaseInventorySlotBPLib_eventDIS_SetNumAdditionalArmEquipmentSlots_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumAdditionalArmEquipmentSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumAdditionalArmEquipmentSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumOfAdditionalInventorySlots_Statics
	{
		struct DecreaseInventorySlotBPLib_eventDIS_SetNumOfAdditionalInventorySlots_Parms
		{
			AFGUnlockSubsystem* TargetUnlockSubsystem;
			int32 size;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetUnlockSubsystem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumOfAdditionalInventorySlots_Statics::NewProp_TargetUnlockSubsystem = { "TargetUnlockSubsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecreaseInventorySlotBPLib_eventDIS_SetNumOfAdditionalInventorySlots_Parms, TargetUnlockSubsystem), Z_Construct_UClass_AFGUnlockSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumOfAdditionalInventorySlots_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecreaseInventorySlotBPLib_eventDIS_SetNumOfAdditionalInventorySlots_Parms, size), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumOfAdditionalInventorySlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumOfAdditionalInventorySlots_Statics::NewProp_TargetUnlockSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumOfAdditionalInventorySlots_Statics::NewProp_size,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumOfAdditionalInventorySlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "DecreaseInventorySlot" },
		{ "ModuleRelativePath", "Public/DecreaseInventorySlotBPLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumOfAdditionalInventorySlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecreaseInventorySlotBPLib, nullptr, "DIS_SetNumOfAdditionalInventorySlots", nullptr, nullptr, Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumOfAdditionalInventorySlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumOfAdditionalInventorySlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumOfAdditionalInventorySlots_Statics::DecreaseInventorySlotBPLib_eventDIS_SetNumOfAdditionalInventorySlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumOfAdditionalInventorySlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumOfAdditionalInventorySlots_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumOfAdditionalInventorySlots_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumOfAdditionalInventorySlots_Statics::DecreaseInventorySlotBPLib_eventDIS_SetNumOfAdditionalInventorySlots_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumOfAdditionalInventorySlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumOfAdditionalInventorySlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalArmEquipmentSlots_Statics
	{
		struct DecreaseInventorySlotBPLib_eventDIS_SetNumTotalArmEquipmentSlots_Parms
		{
			AFGUnlockSubsystem* TargetUnlockSubsystem;
			int32 size;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetUnlockSubsystem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalArmEquipmentSlots_Statics::NewProp_TargetUnlockSubsystem = { "TargetUnlockSubsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecreaseInventorySlotBPLib_eventDIS_SetNumTotalArmEquipmentSlots_Parms, TargetUnlockSubsystem), Z_Construct_UClass_AFGUnlockSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalArmEquipmentSlots_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecreaseInventorySlotBPLib_eventDIS_SetNumTotalArmEquipmentSlots_Parms, size), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalArmEquipmentSlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalArmEquipmentSlots_Statics::NewProp_TargetUnlockSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalArmEquipmentSlots_Statics::NewProp_size,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalArmEquipmentSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "DecreaseInventorySlot" },
		{ "ModuleRelativePath", "Public/DecreaseInventorySlotBPLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalArmEquipmentSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecreaseInventorySlotBPLib, nullptr, "DIS_SetNumTotalArmEquipmentSlots", nullptr, nullptr, Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalArmEquipmentSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalArmEquipmentSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalArmEquipmentSlots_Statics::DecreaseInventorySlotBPLib_eventDIS_SetNumTotalArmEquipmentSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalArmEquipmentSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalArmEquipmentSlots_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalArmEquipmentSlots_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalArmEquipmentSlots_Statics::DecreaseInventorySlotBPLib_eventDIS_SetNumTotalArmEquipmentSlots_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalArmEquipmentSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalArmEquipmentSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalInventorySlots_Statics
	{
		struct DecreaseInventorySlotBPLib_eventDIS_SetNumTotalInventorySlots_Parms
		{
			AFGUnlockSubsystem* TargetUnlockSubsystem;
			int32 size;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetUnlockSubsystem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalInventorySlots_Statics::NewProp_TargetUnlockSubsystem = { "TargetUnlockSubsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecreaseInventorySlotBPLib_eventDIS_SetNumTotalInventorySlots_Parms, TargetUnlockSubsystem), Z_Construct_UClass_AFGUnlockSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalInventorySlots_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecreaseInventorySlotBPLib_eventDIS_SetNumTotalInventorySlots_Parms, size), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalInventorySlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalInventorySlots_Statics::NewProp_TargetUnlockSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalInventorySlots_Statics::NewProp_size,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalInventorySlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "DecreaseInventorySlot" },
		{ "ModuleRelativePath", "Public/DecreaseInventorySlotBPLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalInventorySlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecreaseInventorySlotBPLib, nullptr, "DIS_SetNumTotalInventorySlots", nullptr, nullptr, Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalInventorySlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalInventorySlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalInventorySlots_Statics::DecreaseInventorySlotBPLib_eventDIS_SetNumTotalInventorySlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalInventorySlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalInventorySlots_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalInventorySlots_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalInventorySlots_Statics::DecreaseInventorySlotBPLib_eventDIS_SetNumTotalInventorySlots_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalInventorySlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalInventorySlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDecreaseInventorySlotBPLib);
	UClass* Z_Construct_UClass_UDecreaseInventorySlotBPLib_NoRegister()
	{
		return UDecreaseInventorySlotBPLib::StaticClass();
	}
	struct Z_Construct_UClass_UDecreaseInventorySlotBPLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDecreaseInventorySlotBPLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DecreaseInventorySlot,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDecreaseInventorySlotBPLib_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDecreaseInventorySlotBPLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetActiveEquipmentIndex, "DIS_SetActiveEquipmentIndex" }, // 1450225980
		{ &Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetAdjustedSizeDiff, "DIS_SetAdjustedSizeDiff" }, // 3975144266
		{ &Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetDefaultSize, "DIS_SetDefaultSize" }, // 3871070783
		{ &Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumAdditionalArmEquipmentSlots, "DIS_SetNumAdditionalArmEquipmentSlots" }, // 2775125711
		{ &Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumOfAdditionalInventorySlots, "DIS_SetNumOfAdditionalInventorySlots" }, // 1697411613
		{ &Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalArmEquipmentSlots, "DIS_SetNumTotalArmEquipmentSlots" }, // 1057241368
		{ &Z_Construct_UFunction_UDecreaseInventorySlotBPLib_DIS_SetNumTotalInventorySlots, "DIS_SetNumTotalInventorySlots" }, // 2078558593
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDecreaseInventorySlotBPLib_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecreaseInventorySlotBPLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DecreaseInventorySlotBPLib.h" },
		{ "ModuleRelativePath", "Public/DecreaseInventorySlotBPLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDecreaseInventorySlotBPLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDecreaseInventorySlotBPLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDecreaseInventorySlotBPLib_Statics::ClassParams = {
		&UDecreaseInventorySlotBPLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDecreaseInventorySlotBPLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UDecreaseInventorySlotBPLib_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDecreaseInventorySlotBPLib()
	{
		if (!Z_Registration_Info_UClass_UDecreaseInventorySlotBPLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDecreaseInventorySlotBPLib.OuterSingleton, Z_Construct_UClass_UDecreaseInventorySlotBPLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDecreaseInventorySlotBPLib.OuterSingleton;
	}
	template<> DECREASEINVENTORYSLOT_API UClass* StaticClass<UDecreaseInventorySlotBPLib>()
	{
		return UDecreaseInventorySlotBPLib::StaticClass();
	}
	UDecreaseInventorySlotBPLib::UDecreaseInventorySlotBPLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDecreaseInventorySlotBPLib);
	UDecreaseInventorySlotBPLib::~UDecreaseInventorySlotBPLib() {}
	struct Z_CompiledInDeferFile_FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDecreaseInventorySlotBPLib, UDecreaseInventorySlotBPLib::StaticClass, TEXT("UDecreaseInventorySlotBPLib"), &Z_Registration_Info_UClass_UDecreaseInventorySlotBPLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDecreaseInventorySlotBPLib), 2454066103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_2969890559(TEXT("/Script/DecreaseInventorySlot"),
		Z_CompiledInDeferFile_FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_SFMU53_1_SFM_Mods_DecreaseInventorySlot_Source_DecreaseInventorySlot_Public_DecreaseInventorySlotBPLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
