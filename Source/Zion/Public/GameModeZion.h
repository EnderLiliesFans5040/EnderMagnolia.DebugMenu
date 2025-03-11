#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EGameEndingType.h"
#include "EGameModeType.h"
#include "ERespawnReason.h"
#include "FadeDescriptionData.h"
#include "GameModeZionBase.h"
#include "GameModeZionMapChangedDelegateDelegate.h"
#include "GameModeZion.generated.h"

class AGameModeZion;
class UBreakPartStateManagerComponent;
class UClearManagerComponent;
class UDataTable;
class UDifficultySystemComponent;
class UDropSystemComponent;
class UElevatorStateManagerComponent;
class UEmulatedFogManagerComponent;
class UGameStatsComponent;
class UMaterialFXMatrixData;
class UMaterialSEMatrixData;
class UObject;
class UPoolSystemComponent;
class URecollectionBossComponent;
class URecollectionBossRushComponent;
class URenderStateManagerComponent;
class UStepMatrixData;
class UTimeManagerComponent;
class UWorld;
class UZoneSystemComponent;

UCLASS(Blueprintable, NonTransient)
class ZION_API AGameModeZion : public AGameModeZionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameModeZionMapChangedDelegate OnGameMapChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableStoryLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableGameMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableGameMapTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableRestPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableRestPointEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableItemCurrencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableItemAptitudes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableItemSpirits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableItemSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableItemStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableItemPassives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableItemEquipments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableItemAssists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableItemMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableItemTips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableItemTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableItemKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableItemQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableItemCostumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableItemEnemyInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableItemNPCInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableItemGallery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableRecollectionBosses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTableAchievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStepMatrixData* StepMatrixData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialFXMatrixData* AbilityFXMatrixData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialSEMatrixData* AbilitySEMatrixData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeDescriptionData DefaultFadeDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> TitleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameStatsComponent* GameStatsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEmulatedFogManagerComponent* EmulatedFogManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimeManagerComponent* TimeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoolSystemComponent* PoolSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDropSystemComponent* DropSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UZoneSystemComponent* ZoneSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UClearManagerComponent* ClearManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URenderStateManagerComponent* RenderStateManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDifficultySystemComponent* DifficultySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UElevatorStateManagerComponent* ElevatorStateManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakPartStateManagerComponent* BreakPartStateManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URecollectionBossComponent* RecollectionBossComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URecollectionBossRushComponent* BossRushComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnvironmentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> EnvironmentLevelForGameMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnvironmentLevelOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGameEndingType, int32> ReachedGameEndings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGameEndingType, int32> PreviousCumulatedReachedGameEndings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewGamePlusGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewGamePlusGenerationOverride;
    
public:
    AGameModeZion(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartRecollectionBossRush();
    
    UFUNCTION(BlueprintCallable)
    void StartRecollectionBoss(const FDataTableRowHandle& RecollectionBossDataHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetNewGamePlusGenerationOverride(int32 GenerationOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetEnvironmentLevelOverride(int32 LevelOverride);
    
    UFUNCTION(BlueprintCallable)
    void RespawnPlayer(ERespawnReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void ResetNewGamePlusGenerationOverride();
    
    UFUNCTION(BlueprintCallable)
    void ResetEnvironmentLevelOverride();
    
private:
    UFUNCTION(BlueprintCallable)
    void RegisterRecollectionBossComponent(URecollectionBossComponent* NewRecollectionBossComponent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterBossRushComponent(URecollectionBossRushComponent* NewBossRushComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyGameEndingReached(EGameEndingType GameEndingType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInNewGamePlus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameCleared() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeathProcessingAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStepMatrixData* GetStepMatrixData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRawEnvironmentLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayTimeAsString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNewGamePlusGenerationOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNewGamePlusGeneration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxEnvironmentLevel(int32 NewNewGamePlusGeneration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetLastBossRecollectionHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameModeType GetGameModeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameEndingCountReached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameClearCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnvironmentLevelOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnvironmentLevelNewGamePlus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnvironmentLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableStoryLevels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableRestPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableRestPointEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableRecollectionBosses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableItemTutorials() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableItemTips() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableItemStats() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableItemSpirits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableItemSkills() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableItemQuests() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableItemPassives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableItemNPCInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableItemMaterials() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableItemKeys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableItemGallery() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableItemEquipments() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableItemEnemyInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableItemCurrencies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableItemCostumes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableItemAssists() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableItemAptitudes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableGameMapTransitions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableGameMaps() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableEnemies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTableAchievements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERespawnReason GetCurrentRespawnReason() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialSEMatrixData* GetAbilitySEMatrixData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialFXMatrixData* GetAbilityFXMatrixData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGameModeZion* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void FastTravel(const FName& RestPointID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DidReachGameEnding(EGameEndingType GameEndingType, bool bCheckPreviousGameGeneration) const;
    
    UFUNCTION(BlueprintCallable)
    void DBG_SetNewGamePlusGeneration(int32 NewNewGamePlusGeneration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLeaveRecollectionBoss() const;
    
};

