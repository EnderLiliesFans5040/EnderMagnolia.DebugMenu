#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CurrencyTransactionInfos.h"
#include "InventoryItemUpgradeInfo.h"
#include "PassiveUpgradeData.generated.h"

USTRUCT(BlueprintType)
struct FPassiveUpgradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewGamePlusOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle UpgradePassive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrencyTransactionInfos UpgradePrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventoryItemUpgradeInfo> UpgradeInfos;
    
    ZION_API FPassiveUpgradeData();
};

