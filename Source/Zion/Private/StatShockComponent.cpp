#include "StatShockComponent.h"

UStatShockComponent::UStatShockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RegenerationBlockingStates.AddDefaulted(1);
}


