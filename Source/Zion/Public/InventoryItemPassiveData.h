#pragma once
#include "CoreMinimal.h"
#include "EPassiveCountType.h"
#include "InventoryItemGrantData.h"
#include "PassiveUpgradeData.h"
#include "InventoryItemPassiveData.generated.h"

class UPassive;

USTRUCT(BlueprintType)
struct FInventoryItemPassiveData : public FInventoryItemGrantData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPassive> PassiveClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeUpgraded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPassiveUpgradeData UpgradeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPassiveCountType CountType;
    
    ZION_API FInventoryItemPassiveData();
};

