#include "AbilityHitbox.h"
#include "Components/SceneComponent.h"

AAbilityHitbox::AAbilityHitbox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->DelayBeforeCollision = 0.00f;
    this->DelayBeforeProcessing = 0.00f;
    this->IgnoreIfTargetHasAnyState.AddDefaulted(3);
    this->TargetType = EHitBoxTargetType::Opponents;
    this->bTriggerOnReEntry = false;
    this->bEnableReTrigger = false;
    this->DelayBeforeReTrigger = 0.00f;
    this->bBlockOnOneWayPlatforms = false;
    this->bStopOnBlockerOverlap = false;
    this->RootSceneComponent = (USceneComponent*)RootComponent;
}


