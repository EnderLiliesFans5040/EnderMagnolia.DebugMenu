#include "SkillComponent.h"

USkillComponent::USkillComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentLoadoutIndex = 0;
}

void USkillComponent::UnEquipAll(bool bRemoveFromCurrentLoadout) {
}

void USkillComponent::UnEquip(ESkillSlot SkillSlot, bool bRemoveFromCurrentLoadout) {
}

void USkillComponent::LoadEquippedSkills() {
}

bool USkillComponent::HasEquippedSkill(ESkillSlot SkillSlot) const {
    return false;
}

bool USkillComponent::HasAnyEquippedSkill() const {
    return false;
}

int32 USkillComponent::GetMinimumEquippedSPCost() const {
    return 0;
}

ESkillSlot USkillComponent::GetEquippedSkillSlotFromID(const FName& SkillID) const {
    return ESkillSlot::Invalid;
}

FSkillLevelData USkillComponent::GetEquippedSkillLevelData(ESkillSlot SkillSlot) const {
    return FSkillLevelData{};
}

UInputAction* USkillComponent::GetEquippedSkillInputActionFromSpirit(const FInventoryItemSpiritData& SpiritData) const {
    return NULL;
}

FName USkillComponent::GetEquippedSkillID(ESkillSlot SkillSlot) const {
    return NAME_None;
}

FInventoryItemSkillData USkillComponent::GetEquippedItemSkillData(ESkillSlot SkillSlot) const {
    return FInventoryItemSkillData{};
}

UCommandSet* USkillComponent::GetEquippedCommandSet(ESkillSlot SkillSlot) const {
    return NULL;
}

int32 USkillComponent::GetCurrentSkillLoadoutIndex() const {
    return 0;
}

void USkillComponent::EquipSkillLoadout(int32 LoadoutIndex, bool bAutoLoad) {
}

void USkillComponent::Equip(ESkillSlot SkillSlot, const FName& SkillID, bool bAddToCurrentLoadout, bool bAutoLoad) {
}


