#include "AbilityEffectInstant_DamageHP.h"

UAbilityEffectInstant_DamageHP::UAbilityEffectInstant_DamageHP() {
    this->Element = EAttackElement::None;
    this->DamageEffectType = EDamageEffectType::Absolute;
    this->DamageFactor = 1.00f;
    this->AbsoluteDamage = 0;
    this->TargetPercentageDamage = 0.00f;
    this->bIgnoreInstantKillSetting = false;
}


