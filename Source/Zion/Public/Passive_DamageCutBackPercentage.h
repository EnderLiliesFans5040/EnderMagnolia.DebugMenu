#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_DamageCutBackPercentage.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_DamageCutBackPercentage : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentageBonus;
    
public:
    UPassive_DamageCutBackPercentage();

};

