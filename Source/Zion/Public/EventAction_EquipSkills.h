#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EventAction.h"
#include "ESkillSlot.h"
#include "EventAction_EquipSkills.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_EquipSkills : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyIfSetIsEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillSlot, FDataTableRowHandle> SkillsToEquip;
    
public:
    UEventAction_EquipSkills();

};

