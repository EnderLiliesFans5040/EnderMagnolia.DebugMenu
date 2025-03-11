#include "CommandSet.h"

UCommandSet::UCommandSet() {
    this->Category = ECommandSetCategory::None;
    this->bAllowAutoReSummon = false;
    this->Cooldown = 0.00f;
}


