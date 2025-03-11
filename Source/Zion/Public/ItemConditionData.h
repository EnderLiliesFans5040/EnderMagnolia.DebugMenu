#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EEventClearedCheckMode.h"
#include "EGameEndingType.h"
#include "ItemConditionData.generated.h"

class UEventAsset;

USTRUCT(BlueprintType)
struct FItemConditionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UEventAsset>> ClearedEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventClearedCheckMode EventCheckMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> OwnedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGameEndingType> ReachedEndings;
    
    ZION_API FItemConditionData();
};

