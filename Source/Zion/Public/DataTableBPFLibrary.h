#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "EAptitudeType.h"
#include "ERecollectionItemType.h"
#include "InventoryItemAptitudeData.h"
#include "InventoryItemAssistData.h"
#include "InventoryItemBaseEquipmentData.h"
#include "InventoryItemCostumeData.h"
#include "InventoryItemData.h"
#include "InventoryItemEnemyInfoData.h"
#include "InventoryItemEquipmentData.h"
#include "InventoryItemGalleryData.h"
#include "InventoryItemGenericInfoData.h"
#include "InventoryItemNPCInfoData.h"
#include "InventoryItemPassiveData.h"
#include "InventoryItemSkillData.h"
#include "InventoryItemSpiritData.h"
#include "InventoryItemTipData.h"
#include "InventoryItemTutorialData.h"
#include "ItemGenericAnimationConditionData.h"
#include "MapTransitionSpawnPointData.h"
#include "RecollectionItemData.h"
#include "RestPointData.h"
#include "RestPointEventData.h"
#include "SkillLevelData.h"
#include "DataTableBPFLibrary.generated.h"

class APlayerControllerZion;
class UDataTable;

UCLASS(Blueprintable)
class UDataTableBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDataTableBPFLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FDataTableRowHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRecollectionItemVisible(APlayerControllerZion* PlayerControllerZion, const FDataTableRowHandle& Handle, ERecollectionItemType RecollectionItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsProgressionItem(const FDataTableRowHandle& ItemHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemNPCInfoVisible(APlayerControllerZion* PlayerControllerZion, const FDataTableRowHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemGenericAnimationVisible(APlayerControllerZion* PlayerControllerZion, const FItemGenericAnimationConditionData& AnimationConditions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemGalleryVisible(APlayerControllerZion* PlayerControllerZion, const FDataTableRowHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemEnemyInfoVisible(const APlayerControllerZion* PlayerControllerZion, const FDataTableRowHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEqual(const FDataTableRowHandle& A, const FDataTableRowHandle& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnyRecollectionItemVisible(APlayerControllerZion* PlayerControllerZion, const UDataTable* DataTable, ERecollectionItemType RecollectionItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAllRecollectionItemsChecked(APlayerControllerZion* PlayerControllerZion, const UDataTable* DataTable, ERecollectionItemType RecollectionItemType);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSkillLevelDataFromItemSkillData(const FInventoryItemSkillData& ItemSkillData, int32 Level, FSkillLevelData& out_SkillData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRestPointEventData(const FDataTableRowHandle& Handle, FRestPointEventData& out_RestPointEventData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRestPointData(const FDataTableRowHandle& Handle, FRestPointData& out_RestPointData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRecollectionItemData(const FDataTableRowHandle& Handle, ERecollectionItemType RecollectionItemType, FRecollectionItemData& out_RecollectionItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMapTransitionRowHandleFromTransitionSpawnPointData(const UDataTable* MapTransitionDataTable, const FMapTransitionSpawnPointData& MapTransitionSpawnPointData, FDataTableRowHandle& out_MapTransitionRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemTutorialData(const FDataTableRowHandle& Handle, FInventoryItemTutorialData& out_ItemData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemTipData(const FDataTableRowHandle& Handle, FInventoryItemTipData& out_ItemData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemSpiritData(const FDataTableRowHandle& Handle, FInventoryItemSpiritData& out_ItemData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemSkillData(const FDataTableRowHandle& Handle, FInventoryItemSkillData& out_ItemData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemPassiveData(const FDataTableRowHandle& Handle, FInventoryItemPassiveData& out_ItemData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemNPCInfoData(const FDataTableRowHandle& Handle, FInventoryItemNPCInfoData& out_ItemData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemGenericInfoData(const FDataTableRowHandle& Handle, FInventoryItemGenericInfoData& out_ItemData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemGalleryData(const FDataTableRowHandle& Handle, FInventoryItemGalleryData& out_ItemData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemEquipmentData(const FDataTableRowHandle& Handle, FInventoryItemEquipmentData& out_ItemData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemEnemyInfoData(const FDataTableRowHandle& Handle, FInventoryItemEnemyInfoData& out_ItemData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemCostumeData(const FDataTableRowHandle& Handle, FInventoryItemCostumeData& out_ItemData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemBaseEquipmentData(const FDataTableRowHandle& Handle, FInventoryItemBaseEquipmentData& out_ItemData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemAssistData(const FDataTableRowHandle& Handle, FInventoryItemAssistData& out_ItemData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemAptitudeDataFromType(UDataTable* DataTable, EAptitudeType AptitudeType, FInventoryItemAptitudeData& out_AptitudeData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetInventoryItemData(const FDataTableRowHandle& Handle, FInventoryItemData& out_ItemData);
    
};

