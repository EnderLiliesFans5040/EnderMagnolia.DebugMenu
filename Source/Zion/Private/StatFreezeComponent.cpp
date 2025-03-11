#include "StatFreezeComponent.h"

UStatFreezeComponent::UStatFreezeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RegenerationBlockingStates.AddDefaulted(1);
    this->BreakBlockingStates.AddDefaulted(1);
}


