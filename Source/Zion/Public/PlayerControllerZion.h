#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EventActorInterface.h"
#include "ClearActorData.h"
#include "EEventClearedCheckMode.h"
#include "ERespawnReason.h"
#include "ETutorialHook.h"
#include "EWidgetMinimapDisplayMode.h"
#include "MapTransitionSpawnPointData.h"
#include "PlayerControllerZionBase.h"
#include "RestPointEventData.h"
#include "RuntimeCheckpointData.h"
#include "SummonStashElement.h"
#include "Templates/SubclassOf.h"
#include "PlayerControllerZion.generated.h"

class APlayerControllerZion;
class UAssistComponent;
class UCustomMarkerComponent;
class UEquipmentComponent;
class UEventAsset;
class UFieldTalkComponent;
class UFogOfWarComponent;
class UHealComponent;
class UInventoryComponent;
class UItemStatsWatcherComponent;
class UMaterialParameterCollection;
class UObject;
class UPassiveComponent;
class UPathFollowingComponent;
class UPlayerCostumeComponent;
class UShopInfoComponent;
class USkillComponent;
class UStatsControllerPlayerComponent;
class UStoryLevelComponent;
class UUserWidgetMap;
class UUserWidgetPlayerUI;

UCLASS(Abstract, Blueprintable)
class ZION_API APlayerControllerZion : public APlayerControllerZionBase, public IEventActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DefaultRespawnRestPointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetPlayerUI> PlayerUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetMap> WidgetMapClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* SystemMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewGameHPPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkillComponent* SkillComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentComponent* EquipmentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAssistComponent* AssistComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPassiveComponent* PassiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsControllerPlayerComponent* StatsControllerPlayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemStatsWatcherComponent* ItemStatsWatcherComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealComponent* HealComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerCostumeComponent* PlayerCostumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShopInfoComponent* ShopInfoComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFieldTalkComponent* FieldTalkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFogOfWarComponent* FogOfWarComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStoryLevelComponent* StoryLevelComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomMarkerComponent* CustomMarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPathFollowingComponent* PathFollowingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidgetPlayerUI* PlayerUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidgetMap* WidgetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName RespawnRestPointID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> ClearedEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> PreviousRunsClearedEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FClearActorData> VisitedZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> VisitedAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> DisplayedAreaNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FMapTransitionSpawnPointData> UsedMapTransitionSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> AvailableRestPointEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> ClearedRestPointEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> CheckedRecollectionItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> KilledEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> AvailableExtraEnemyInfoItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWidgetMinimapDisplayMode MinimapDisplayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRuntimeCheckpointData RuntimeCheckpointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerTrailEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachePlayerTrailDataDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlayerTrailDataCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerTrailDataDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERespawnReason> ClearPlayerTrailRespawnReasons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSummonStashElement> SummonStash;
    
public:
    APlayerControllerZion(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockFastTravel();
    
private:
    UFUNCTION(BlueprintCallable)
    void ShowPlayerUI();
    
public:
    UFUNCTION(BlueprintCallable)
    FRuntimeCheckpointData SetRuntimeCheckpointData(const FRuntimeCheckpointData& NewRuntimeCheckpointData);
    
    UFUNCTION(BlueprintCallable)
    void SetRespawnRestPoint(const FName& InRespawnRestPointID);
    
    UFUNCTION(BlueprintCallable)
    EWidgetMinimapDisplayMode SetMinimapDisplayMode(const EWidgetMinimapDisplayMode& NewMinimapDisplayMode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStoryLevelChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRespawnCompleted(ERespawnReason RespawnReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestTutorials(const TArray<FName>& TutorialIDs);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPawnDeathProcessEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnGameReady();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameMapChangeStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameMapChangeFinished(const FName& GameMapID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayAreaName(const FName& AreaName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAchievementUnlocked(const FName& AchievementID);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkRestEventAsSeen(const FName& RestEventID);
    
    UFUNCTION(BlueprintCallable)
    void MarkRecollectionItemAsChecked(const FDataTableRowHandle& RecollectionItem);
    
    UFUNCTION(BlueprintCallable)
    void MarkExtraEnemyInfoAsAvailable(const FDataTableRowHandle& ExtraEnemyInfoItem);
    
    UFUNCTION(BlueprintCallable)
    void MarkEventAsCleared(const UEventAsset* EventAsset);
    
    UFUNCTION(BlueprintCallable)
    void MarkEnemyAsKilled(const FDataTableRowHandle& EnemyDataHandle);
    
    UFUNCTION(BlueprintCallable)
    void LockFastTravel();
    
    UFUNCTION(BlueprintCallable)
    void LaunchTutorialHook(ETutorialHook TutorialHook);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZoneVisited(const FClearActorData& ZoneActorData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSoftEventCleared(const TSoftObjectPtr<UEventAsset>& EventAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRestEventAvailable(const FName& RestEventID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecollectionItemChecked(const FDataTableRowHandle& RecollectionItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapTransitionSpawnPointUsed(const FMapTransitionSpawnPointData& MapTransitionSpawnPointData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFastTravelLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExtraEnemyInfoAvailable(const FDataTableRowHandle& ExtraEnemyInfoItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventCleared(const FName EventId, const EEventClearedCheckMode CheckMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnemyKilled(const FDataTableRowHandle& EnemyDataHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBackToRestPointLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAreaVisited(const FName& AreaName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAreaNameDisplayed(const FName& AreaName) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HidePlayerUI(bool bInstant);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAvailableRestEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidgetMap* GetWidgetMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRuntimeCheckpointData GetRuntimeCheckpointData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRespawnRestPointID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidgetPlayerUI* GetPlayerUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWidgetMinimapDisplayMode GetMinimapDisplayMode() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAvailableRestEvent(FDataTableRowHandle& out_RestPointEventRowHandle, FRestPointEventData& out_RestPointEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerControllerZion* Get(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void FullyRestore();
    
    UFUNCTION(BlueprintCallable)
    void FlushSpiritCache();
    
    UFUNCTION(BlueprintCallable)
    void DisplayAreaName(const FName& AreaName);
    
    UFUNCTION(BlueprintCallable)
    bool DebugMarkEventAsCleared(const FName& EventId, bool bCleared);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SetRestEventAvailable(const FName& RestEventID, bool bAvailable);
    
    UFUNCTION(BlueprintCallable)
    void AddRestEvent(const FName& RestEventID);
    

    // Fix for true pure virtual functions not being implemented
};

