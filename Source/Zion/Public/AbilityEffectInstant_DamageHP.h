#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectInstant.h"
#include "EAttackElement.h"
#include "EDamageEffectType.h"
#include "AbilityEffectInstant_DamageHP.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAbilityEffectInstant_DamageHP : public UAbilityEffectInstant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackElement Element;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageEffectType DamageEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbsoluteDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetPercentageDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreInstantKillSetting;
    
public:
    UAbilityEffectInstant_DamageHP();

};

