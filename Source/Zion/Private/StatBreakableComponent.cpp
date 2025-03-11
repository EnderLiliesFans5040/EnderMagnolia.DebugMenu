#include "StatBreakableComponent.h"

UStatBreakableComponent::UStatBreakableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RegenerationBlockingStates.AddDefaulted(1);
    this->bEnabled = true;
    this->bUseMultiplicativeParameters = false;
    this->bUseAdditiveParameters = false;
    this->bClampMinParameters = false;
    this->bClampMaxParameters = false;
}

bool UStatBreakableComponent::SetIsImmune(bool bImmune) {
    return false;
}

void UStatBreakableComponent::OnBreak_Implementation() {
}

bool UStatBreakableComponent::IsInvincible() const {
    return false;
}

bool UStatBreakableComponent::IsEnabled() const {
    return false;
}

bool UStatBreakableComponent::IsBroken() const {
    return false;
}


