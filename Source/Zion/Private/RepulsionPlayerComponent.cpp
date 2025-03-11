#include "RepulsionPlayerComponent.h"

URepulsionPlayerComponent::URepulsionPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisableForceTime = 0.30f;
    this->NoEnemyTime = 0.75f;
    this->FallingForceFactor = 0.50f;
    this->SwimmingForceFactor = 0.25f;
    this->IgnoreRepulsionStates.AddDefaulted(2);
    this->InputComponent = NULL;
    this->ZionMovementComponent = NULL;
    this->StateComponent = NULL;
    this->CollisionComponent = NULL;
}

void URepulsionPlayerComponent::RemoveRepulsionEnemyComponent(URepulsionEnemyComponent* RepulsionEnemyComponent, UPrimitiveComponent* Collider) {
}

void URepulsionPlayerComponent::AddRepulsionEnemyComponent(URepulsionEnemyComponent* RepulsionEnemyComponent, UPrimitiveComponent* Collider) {
}


