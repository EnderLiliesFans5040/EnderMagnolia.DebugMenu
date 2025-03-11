#pragma once
#include "CoreMinimal.h"
#include "RecollectionBossSaveData.generated.h"

USTRUCT(BlueprintType)
struct FRecollectionBossSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewGameGenerationOverride;
    
    ZION_API FRecollectionBossSaveData();
};

