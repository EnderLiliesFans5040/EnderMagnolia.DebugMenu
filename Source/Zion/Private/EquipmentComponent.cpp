#include "EquipmentComponent.h"

UEquipmentComponent::UEquipmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentLoadoutIndex = 0;
}

void UEquipmentComponent::UnEquipAll(bool bRemoveFromCurrentLoadout) {
}

void UEquipmentComponent::UnEquip(EEquipmentSlot EquipmentSlot, bool bRemoveFromCurrentLoadout) {
}

void UEquipmentComponent::OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn) {
}

bool UEquipmentComponent::IsEquippedOnSlot(EEquipmentSlot EquipmentSlot, const FName& EquipmentID) const {
    return false;
}

bool UEquipmentComponent::IsEquipped(const FName& EquipmentID) const {
    return false;
}

FName UEquipmentComponent::GetEquipmentIDFromSlot(EEquipmentSlot EquipmentSlot) const {
    return NAME_None;
}

FInventoryItemEquipmentData UEquipmentComponent::GetEquipmentDataFromSlot(EEquipmentSlot EquipmentSlot) const {
    return FInventoryItemEquipmentData{};
}

FInventoryItemEquipmentData UEquipmentComponent::GetEquipmentDataFromID(const FName& EquipmentID) const {
    return FInventoryItemEquipmentData{};
}

int32 UEquipmentComponent::GetCurrentEquipmentLoadoutIndex() const {
    return 0;
}

void UEquipmentComponent::EquipEquipmentLoadout(int32 LoadoutIndex) {
}

void UEquipmentComponent::Equip(EEquipmentSlot EquipmentSlot, const FName& EquipmentID, bool bAddToCurrentLoadout) {
}


