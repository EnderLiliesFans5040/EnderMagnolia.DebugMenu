#pragma once
#include "CoreMinimal.h"
#include "PlayerAssistLoadoutData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerAssistLoadoutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssistID;
    
    ZION_API FPlayerAssistLoadoutData();
};

