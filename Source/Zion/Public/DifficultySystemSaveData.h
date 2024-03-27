#pragma once
#include "CoreMinimal.h"
#include "DifficultySettings.h"
#include "EDifficultyPreset.h"
#include "DifficultySystemSaveData.generated.h"

USTRUCT(BlueprintType)
struct FDifficultySystemSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDifficultyPreset DifficultyPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultySettings DifficultySettings;
    
    ZION_API FDifficultySystemSaveData();
};

