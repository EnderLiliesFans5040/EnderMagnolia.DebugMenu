#include "RecollectionBossBaseComponent.h"

URecollectionBossBaseComponent::URecollectionBossBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExitRespawnReason = ERespawnReason::Death;
    this->RetryRespawnReason = ERespawnReason::Death;
    this->bAutoActivateBoss = true;
    this->AutoActivationTimer = 2.00f;
}

void URecollectionBossBaseComponent::Start() {
}

void URecollectionBossBaseComponent::SetNewGameGenerationOverride(int32 GenerationOverride) {
}

void URecollectionBossBaseComponent::RetryRecollectionMode_PostFadeOut() {
}

void URecollectionBossBaseComponent::RetryRecollectionMode() {
}

void URecollectionBossBaseComponent::OnRetryDialogYes() {
}

void URecollectionBossBaseComponent::OnRetryDialogNo() {
}

void URecollectionBossBaseComponent::OnDialogClosed() {
}

bool URecollectionBossBaseComponent::IsStarted() const {
    return false;
}

bool URecollectionBossBaseComponent::InstantiateRetryDialog() {
    return false;
}

int32 URecollectionBossBaseComponent::GetNewGameGenerationOverride() const {
    return 0;
}

AEnemySpawner* URecollectionBossBaseComponent::GetCachedEnemySpawner() const {
    return NULL;
}

void URecollectionBossBaseComponent::GameMapChange() {
}

void URecollectionBossBaseComponent::Finish() {
}

void URecollectionBossBaseComponent::ExitRecollectionMode_PostFadeOut() {
}

void URecollectionBossBaseComponent::ExitRecollectionMode() {
}

bool URecollectionBossBaseComponent::CanLeaveRecollectionBoss() const {
    return false;
}

void URecollectionBossBaseComponent::BossDeathStart(AEnemySpawner* EnemySpawner) {
}

void URecollectionBossBaseComponent::BossDeathEndPostDelay() {
}

void URecollectionBossBaseComponent::BossDeathEnd(AEnemySpawner* EnemySpawner) {
}

void URecollectionBossBaseComponent::BossActivation(AEnemySpawner* EnemySpawner) {
}


