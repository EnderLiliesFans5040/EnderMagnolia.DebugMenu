#include "AssistComponent.h"

UAssistComponent::UAssistComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentLoadoutIndex = 0;
}

void UAssistComponent::UnEquipAssist(bool bRemoveFromCurrentLoadout) {
}

void UAssistComponent::OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn) {
}

FInventoryItemAssistData UAssistComponent::GetEquippedAssistData() const {
    return FInventoryItemAssistData{};
}

int32 UAssistComponent::GetCurrentAssistLoadoutIndex() const {
    return 0;
}

FName UAssistComponent::GetAssistID() const {
    return NAME_None;
}

FInventoryItemAssistData UAssistComponent::GetAssistDataFromID(const FName& AssistID) const {
    return FInventoryItemAssistData{};
}

void UAssistComponent::EquipAssistLoadout(int32 LoadoutIndex) {
}

void UAssistComponent::EquipAssist(const FName& AssistID, bool bAddToCurrentLoadout) {
}


