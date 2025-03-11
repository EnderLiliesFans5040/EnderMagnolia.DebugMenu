#pragma once
#include "CoreMinimal.h"
#include "EEventClearedCheckMode.generated.h"

UENUM(BlueprintType)
enum class EEventClearedCheckMode : uint8 {
    AnyGameGeneration,
    CurrentGameGenerationOnly,
    PreviousGameGenerationsOnly,
};

