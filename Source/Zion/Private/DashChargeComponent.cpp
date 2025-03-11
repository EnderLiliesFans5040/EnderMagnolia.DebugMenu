#include "DashChargeComponent.h"

UDashChargeComponent::UDashChargeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DashTimeForCharge = 1.00f;
    this->DashTimeForChargeShort = 1.00f;
    this->ChargeDashSpeedFactorToAdd = 0.00f;
    this->DashChargeStates.AddDefaulted(1);
    this->DefaultSpiritClass = NULL;
    this->SwimmingSpiritClass = NULL;
    this->ChargingFX = NULL;
    this->ChargingAudio = NULL;
    this->AuraFX = NULL;
    this->Ability = NULL;
    this->Spirit = NULL;
    this->LoopAudioComponent = NULL;
}

void UDashChargeComponent::OnStartAnimation(UTrackEntry* TrackEntry) {
}

void UDashChargeComponent::OnCommandStart(const UCommand* Command) {
}

bool UDashChargeComponent::IsDashCharged() const {
    return false;
}


