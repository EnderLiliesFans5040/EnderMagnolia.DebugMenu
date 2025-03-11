#include "RepulsionEnemyComponent.h"

URepulsionEnemyComponent::URepulsionEnemyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableRepulsion = false;
    this->RepulsionOriginType = EEnemyRepulsionOrigin::ColliderCenter;
    this->CharacterOwner = NULL;
}

void URepulsionEnemyComponent::OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void URepulsionEnemyComponent::OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


