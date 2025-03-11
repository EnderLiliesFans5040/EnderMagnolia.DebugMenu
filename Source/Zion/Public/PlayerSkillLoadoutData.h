#pragma once
#include "CoreMinimal.h"
#include "ESkillSlot.h"
#include "PlayerSkillLoadoutData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSkillLoadoutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillSlot, FName> SkillIDForSkillSlots;
    
    ZION_API FPlayerSkillLoadoutData();
};

