#pragma once
#include "CoreMinimal.h"
#include "EDifficultyPreset.h"
#include "RecollectionBossRushRecordsData.h"
#include "RecollectionBossRushSaveData.generated.h"

USTRUCT(BlueprintType)
struct FRecollectionBossRushSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewGameGenerationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDifficultyPreset, FRecollectionBossRushRecordsData> NewGameRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDifficultyPreset, FRecollectionBossRushRecordsData> NewGamePlusRecords;
    
    ZION_API FRecollectionBossRushSaveData();
};

