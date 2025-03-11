#pragma once
#include "CoreMinimal.h"
#include "EEventClearedCheckMode.h"
#include "EventAction_GrantItemsBase.h"
#include "ItemHandleCount.h"
#include "EventAction_GrantItems.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_GrantItems : public UEventAction_GrantItemsBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemHandleCount> ItemHandleCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideItemsOnEventRepeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventClearedCheckMode RepeatItemMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemHandleCount> RepeatItemHandleCounts;
    
public:
    UEventAction_GrantItems();

};

