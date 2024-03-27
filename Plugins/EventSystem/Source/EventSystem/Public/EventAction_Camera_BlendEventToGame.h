#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "ViewTargetBlendSettings.h"
#include "EventAction_Camera_BlendEventToGame.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_Camera_BlendEventToGame : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetBlendSettings BlendSettings;
    
public:
    UEventAction_Camera_BlendEventToGame();

};

