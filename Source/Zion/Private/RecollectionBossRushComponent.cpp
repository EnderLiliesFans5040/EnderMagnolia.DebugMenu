#include "RecollectionBossRushComponent.h"
#include "ERespawnReason.h"

URecollectionBossRushComponent::URecollectionBossRushComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExitRespawnReason = ERespawnReason::ExitBossRush;
    this->RetryRespawnReason = ERespawnReason::RetryBossRush;
    this->CurrentBossRushIndex = -1;
    this->PreNextBossDelay = 5.00f;
    this->PreClearProcessDelay = 5.00f;
    this->EnemyHPFactor = 1.00f;
    this->bAllowEnemyDrop = false;
}

int32 URecollectionBossRushComponent::TryAddNewRecord(const FRecollectionBossRushRecordData& NewRecordData) {
    return 0;
}

bool URecollectionBossRushComponent::ShouldDisplayRecollectionBossRush() const {
    return false;
}

bool URecollectionBossRushComponent::SetTimerPaused(bool bIsPaused) {
    return false;
}

void URecollectionBossRushComponent::ResetCurrentRecords() {
}







bool URecollectionBossRushComponent::IsTimerPaused() const {
    return false;
}

void URecollectionBossRushComponent::GoToNextBoss() {
}

FRecollectionBossRushRecordData URecollectionBossRushComponent::GetRecordData(const int32 RecordIndex) {
    return FRecollectionBossRushRecordData{};
}

int32 URecollectionBossRushComponent::GetMaxBossesDefeatedCount() {
    return 0;
}

int32 URecollectionBossRushComponent::GetCurrentBossIndex() const {
    return 0;
}

float URecollectionBossRushComponent::GetBossRushTime() const {
    return 0.0f;
}

EDifficultyPreset URecollectionBossRushComponent::GetBossRushDifficultyPreset() const {
    return EDifficultyPreset::None;
}

void URecollectionBossRushComponent::GameMapChangePostFade() {
}

void URecollectionBossRushComponent::ClearBossRush() {
}

bool URecollectionBossRushComponent::CanUpdateTime_Implementation() const {
    return false;
}


