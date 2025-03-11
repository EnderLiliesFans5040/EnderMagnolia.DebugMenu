#include "TimedInputSnapshot.h"

FTimedInputSnapshot::FTimedInputSnapshot() {
    this->Time = 0.00f;
    this->bProcessedExactly = false;
    this->ProcessedTime = 0.00f;
}

