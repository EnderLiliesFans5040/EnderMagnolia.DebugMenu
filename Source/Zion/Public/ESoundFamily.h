#pragma once
#include "CoreMinimal.h"
#include "ESoundFamily.generated.h"

UENUM(BlueprintType)
enum class ESoundFamily : uint8 {
    None,
    BGM,
    SE_UI,
    SE_Game,
    Ambience,
    Voice,
    Master = 100,
};

