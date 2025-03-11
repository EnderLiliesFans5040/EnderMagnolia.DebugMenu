#pragma once
#include "CoreMinimal.h"
#include "ClearManagerSaveData.h"
#include "DifficultySystemSaveData.h"
#include "DropSystemSaveData.h"
#include "EGameEndingType.h"
#include "GameStatsSaveData.h"
#include "RecollectionBossRushSaveData.h"
#include "RecollectionBossSaveData.h"
#include "RenderStateManagerSaveData.h"
#include "GameModeSaveData.generated.h"

USTRUCT(BlueprintType)
struct FGameModeSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnvironmentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGameEndingType, int32> ReachedGameEndings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGameEndingType, int32> PreviousCumulatedReachedGameEndings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewGamePlusGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> EnvironmentLevelForGameMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameStatsSaveData GameStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClearManagerSaveData ClearManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRenderStateManagerSaveData RenderStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultySystemSaveData DifficultySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDropSystemSaveData DropSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecollectionBossRushSaveData BossRush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecollectionBossSaveData RecollectionBoss;
    
    ZION_API FGameModeSaveData();
};

