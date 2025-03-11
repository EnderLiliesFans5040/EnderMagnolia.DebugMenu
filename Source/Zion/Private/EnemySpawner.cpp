#include "EnemySpawner.h"
#include "ClearComponent.h"

AEnemySpawner::AEnemySpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClearComponent = CreateDefaultSubobject<UClearComponent>(TEXT("Clear"));
    this->bUseConditionChecker = false;
    this->bMarkAsClearedOnConditionFailed = false;
    this->bAutoActivateEnemy = true;
    this->ClearTiming = EEnemySpawnerClearTiming::OnDeathProcessStart;
    this->bSpawnEvenWhenCleared = false;
    this->bLockEnvironmentLevel = false;
    this->bIncrementEnvironmentLevel = false;
    this->bOverrideBehaviorIdle = false;
    this->bOverrideBehaviorAggression = false;
    this->bOverridePatrolRange = false;
    this->PatrolRangeOverride = 0.00f;
    this->bCacheBreakPartState = true;
    this->EnemyPartBrokenType = EBreakType::None;
}

bool AEnemySpawner::ShouldSpawnEvenWhenCleared() const {
    return false;
}

void AEnemySpawner::ReplaceEnemy(const FDataTableRowHandle& NewEnemyRowHandle, const FTransform& SpawnTransform) {
}





void AEnemySpawner::OnEnemyDeathProcessStart() {
}

void AEnemySpawner::OnEnemyDeathProcessEnd() {
}


void AEnemySpawner::OnEnemyBreakPart(const EBreakType& BreakType) {
}


void AEnemySpawner::OnClearStatusChecked(EClearStatus ClearStatus) {
}


bool AEnemySpawner::IsEnemyActivated() const {
    return false;
}

AAIControllerZion* AEnemySpawner::GetEnemyAIController() const {
    return NULL;
}

ACharacterZion* AEnemySpawner::GetEnemy() const {
    return NULL;
}

void AEnemySpawner::ActivateEnemy() {
}


