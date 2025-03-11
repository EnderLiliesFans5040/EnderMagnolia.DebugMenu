#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EDifficultyPreset.h"
#include "RecollectionBossBaseComponent.h"
#include "RecollectionBossRushRecordData.h"
#include "RecollectionBossRushComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URecollectionBossRushComponent : public URecollectionBossBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentBossRushIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreNextBossDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreClearProcessDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyHPFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowEnemyDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> BossList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BossDeathRecoveryDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BossRushClearedDrop;
    
public:
    URecollectionBossRushComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 TryAddNewRecord(const FRecollectionBossRushRecordData& NewRecordData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayRecollectionBossRush() const;
    
    UFUNCTION(BlueprintCallable)
    bool SetTimerPaused(bool bIsPaused);
    
    UFUNCTION(BlueprintCallable)
    void ResetCurrentRecords();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartBossRush();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTimerPaused(bool bIsPaused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameMapChangedPostFade();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameMapChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndBossRush();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClearBossRush();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTimerPaused() const;
    
    UFUNCTION(BlueprintCallable)
    void GoToNextBoss();
    
    UFUNCTION(BlueprintCallable)
    FRecollectionBossRushRecordData GetRecordData(const int32 RecordIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxBossesDefeatedCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentBossIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBossRushTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDifficultyPreset GetBossRushDifficultyPreset() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GameMapChangePostFade();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearBossRush();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUpdateTime() const;
    
};

