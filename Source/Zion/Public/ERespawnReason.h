#pragma once
#include "CoreMinimal.h"
#include "ERespawnReason.generated.h"

UENUM(BlueprintType)
enum class ERespawnReason : uint8 {
    None,
    Default,
    Death,
    FastTravel,
    BackToRestpoint,
    ExitBossRush,
    ExitBossRecollection,
    RetryBossRush,
    RetryBossRecollection,
};

