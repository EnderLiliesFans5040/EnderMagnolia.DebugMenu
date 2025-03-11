#include "StatBurnComponent.h"

UStatBurnComponent::UStatBurnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RegenerationBlockingStates.AddDefaulted(1);
}


