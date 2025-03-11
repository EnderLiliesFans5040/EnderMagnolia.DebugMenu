#pragma once
#include "CoreMinimal.h"
#include "ESkillSlot.h"
#include "PlayerSkillLoadoutData.h"
#include "PlayerSkillSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSkillSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillSlot, FName> SkillIDForSkillSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLoadoutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerSkillLoadoutData> Loadouts;
    
    ZION_API FPlayerSkillSaveData();
};

