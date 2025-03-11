#include "PlayerControllerZion.h"
#include "AssistComponent.h"
#include "CustomMarkerComponent.h"
#include "EquipmentComponent.h"
#include "FieldTalkComponent.h"
#include "FogOfWarComponent.h"
#include "HealComponent.h"
#include "InventoryComponent.h"
#include "ItemStatsWatcherComponent.h"
#include "PassiveComponent.h"
#include "PlayerCostumeComponent.h"
#include "ShopInfoComponent.h"
#include "SkillComponent.h"
#include "StatsControllerPlayerComponent.h"
#include "StoryLevelComponent.h"
#include "ZionPathFollowingComponent.h"

APlayerControllerZion::APlayerControllerZion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoManageActiveCameraTarget = false;
    this->ClickEventKeys.AddDefaulted(1);
    this->PlayerUIClass = NULL;
    this->WidgetMapClass = NULL;
    this->NewGameHPPercentage = 50.00f;
    this->SkillComponent = CreateDefaultSubobject<USkillComponent>(TEXT("Skill"));
    this->EquipmentComponent = CreateDefaultSubobject<UEquipmentComponent>(TEXT("Equipment"));
    this->AssistComponent = CreateDefaultSubobject<UAssistComponent>(TEXT("Assist"));
    this->PassiveComponent = CreateDefaultSubobject<UPassiveComponent>(TEXT("Passive"));
    this->StatsControllerPlayerComponent = CreateDefaultSubobject<UStatsControllerPlayerComponent>(TEXT("StatsControllerPlayer"));
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));
    this->ItemStatsWatcherComponent = CreateDefaultSubobject<UItemStatsWatcherComponent>(TEXT("ItemStatsWatcher"));
    this->HealComponent = CreateDefaultSubobject<UHealComponent>(TEXT("heal"));
    this->PlayerCostumeComponent = CreateDefaultSubobject<UPlayerCostumeComponent>(TEXT("PlayerCostume"));
    this->ShopInfoComponent = CreateDefaultSubobject<UShopInfoComponent>(TEXT("ShopInfo"));
    this->FieldTalkComponent = CreateDefaultSubobject<UFieldTalkComponent>(TEXT("FieldTalk"));
    this->FogOfWarComponent = CreateDefaultSubobject<UFogOfWarComponent>(TEXT("FogOfWar"));
    this->StoryLevelComponent = CreateDefaultSubobject<UStoryLevelComponent>(TEXT("StoryLevel"));
    this->CustomMarkerComponent = CreateDefaultSubobject<UCustomMarkerComponent>(TEXT("CustomMarker"));
    this->PathFollowingComponent = CreateDefaultSubobject<UZionPathFollowingComponent>(TEXT("PathFollowing"));
    this->PlayerUI = NULL;
    this->WidgetMap = NULL;
    this->MinimapDisplayMode = EWidgetMinimapDisplayMode::Default;
    this->bPlayerTrailEnabled = true;
    this->CachePlayerTrailDataDelay = 0.10f;
    this->MaxPlayerTrailDataCount = 50;
    this->PlayerTrailDataDistanceThreshold = 225.00f;
    this->ClearPlayerTrailRespawnReasons.AddDefaulted(6);
}

void APlayerControllerZion::UnlockFastTravel() {
}

void APlayerControllerZion::ShowPlayerUI() {
}

FRuntimeCheckpointData APlayerControllerZion::SetRuntimeCheckpointData(const FRuntimeCheckpointData& NewRuntimeCheckpointData) {
    return FRuntimeCheckpointData{};
}

void APlayerControllerZion::SetRespawnRestPoint(const FName& InRespawnRestPointID) {
}

EWidgetMinimapDisplayMode APlayerControllerZion::SetMinimapDisplayMode(const EWidgetMinimapDisplayMode& NewMinimapDisplayMode) {
    return EWidgetMinimapDisplayMode::Default;
}




void APlayerControllerZion::OnPawnDeathProcessEnd() {
}

void APlayerControllerZion::OnGameReady() {
}





void APlayerControllerZion::MarkRestEventAsSeen(const FName& RestEventID) {
}

void APlayerControllerZion::MarkRecollectionItemAsChecked(const FDataTableRowHandle& RecollectionItem) {
}

void APlayerControllerZion::MarkExtraEnemyInfoAsAvailable(const FDataTableRowHandle& ExtraEnemyInfoItem) {
}

void APlayerControllerZion::MarkEventAsCleared(const UEventAsset* EventAsset) {
}

void APlayerControllerZion::MarkEnemyAsKilled(const FDataTableRowHandle& EnemyDataHandle) {
}

void APlayerControllerZion::LockFastTravel() {
}

void APlayerControllerZion::LaunchTutorialHook(ETutorialHook TutorialHook) {
}

bool APlayerControllerZion::IsZoneVisited(const FClearActorData& ZoneActorData) const {
    return false;
}

bool APlayerControllerZion::IsSoftEventCleared(const TSoftObjectPtr<UEventAsset>& EventAsset) const {
    return false;
}

bool APlayerControllerZion::IsRestEventAvailable(const FName& RestEventID) const {
    return false;
}

bool APlayerControllerZion::IsRecollectionItemChecked(const FDataTableRowHandle& RecollectionItem) const {
    return false;
}

bool APlayerControllerZion::IsMapTransitionSpawnPointUsed(const FMapTransitionSpawnPointData& MapTransitionSpawnPointData) const {
    return false;
}

bool APlayerControllerZion::IsInEvent() const {
    return false;
}

bool APlayerControllerZion::IsFastTravelLocked() const {
    return false;
}

bool APlayerControllerZion::IsExtraEnemyInfoAvailable(const FDataTableRowHandle& ExtraEnemyInfoItem) const {
    return false;
}

bool APlayerControllerZion::IsEventCleared(const FName EventId, const EEventClearedCheckMode CheckMode) const {
    return false;
}

bool APlayerControllerZion::IsEnemyKilled(const FDataTableRowHandle& EnemyDataHandle) const {
    return false;
}

bool APlayerControllerZion::IsBackToRestPointLocked() const {
    return false;
}

bool APlayerControllerZion::IsAreaVisited(const FName& AreaName) const {
    return false;
}

bool APlayerControllerZion::IsAreaNameDisplayed(const FName& AreaName) const {
    return false;
}

void APlayerControllerZion::HidePlayerUI(bool bInstant) {
}

bool APlayerControllerZion::HasAvailableRestEvent() const {
    return false;
}

UUserWidgetMap* APlayerControllerZion::GetWidgetMap() const {
    return NULL;
}

FRuntimeCheckpointData APlayerControllerZion::GetRuntimeCheckpointData() const {
    return FRuntimeCheckpointData{};
}

FName APlayerControllerZion::GetRespawnRestPointID() const {
    return NAME_None;
}

UUserWidgetPlayerUI* APlayerControllerZion::GetPlayerUI() const {
    return NULL;
}

EWidgetMinimapDisplayMode APlayerControllerZion::GetMinimapDisplayMode() const {
    return EWidgetMinimapDisplayMode::Default;
}

bool APlayerControllerZion::GetAvailableRestEvent(FDataTableRowHandle& out_RestPointEventRowHandle, FRestPointEventData& out_RestPointEventData) {
    return false;
}

APlayerControllerZion* APlayerControllerZion::Get(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

void APlayerControllerZion::FullyRestore() {
}

void APlayerControllerZion::FlushSpiritCache() {
}

void APlayerControllerZion::DisplayAreaName(const FName& AreaName) {
}

bool APlayerControllerZion::DebugMarkEventAsCleared(const FName& EventId, bool bCleared) {
    return false;
}

void APlayerControllerZion::DBG_SetRestEventAvailable(const FName& RestEventID, bool bAvailable) {
}

void APlayerControllerZion::AddRestEvent(const FName& RestEventID) {
}


