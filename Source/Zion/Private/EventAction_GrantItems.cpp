#include "EventAction_GrantItems.h"

UEventAction_GrantItems::UEventAction_GrantItems() {
    this->bOverrideItemsOnEventRepeat = false;
    this->RepeatItemMode = EEventClearedCheckMode::PreviousGameGenerationsOnly;
    this->RepeatItemHandleCounts.AddDefaulted(1);
}


