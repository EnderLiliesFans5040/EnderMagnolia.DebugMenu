#include "RecollectionBossComponent.h"
#include "ERespawnReason.h"

URecollectionBossComponent::URecollectionBossComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExitRespawnReason = ERespawnReason::ExitBossRecollection;
    this->RetryRespawnReason = ERespawnReason::RetryBossRecollection;
    this->BossDeathEndDelay = 5.00f;
}


