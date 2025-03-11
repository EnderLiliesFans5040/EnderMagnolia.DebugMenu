#pragma once
#include "CoreMinimal.h"
#include "PlayerAssistLoadoutData.h"
#include "PlayerAssistSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerAssistSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssistID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLoadoutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerAssistLoadoutData> Loadouts;
    
    ZION_API FPlayerAssistSaveData();
};

