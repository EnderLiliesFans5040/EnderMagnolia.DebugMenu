#include "InventoryItemPassiveData.h"

FInventoryItemPassiveData::FInventoryItemPassiveData() {
    this->SlotCost = 0;
    this->bCanBeUpgraded = false;
    this->CountType = EPassiveCountType::None;
}

