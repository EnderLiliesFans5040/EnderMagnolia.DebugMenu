#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "ItemHandleCount.h"
#include "EventAction_RemoveItems.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_RemoveItems : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemHandleCount> ItemHandleCounts;
    
public:
    UEventAction_RemoveItems();

};

