#pragma once
#include "CoreMinimal.h"
#include "PlayerPassiveLoadoutData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerPassiveLoadoutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemIDs;
    
    ZION_API FPlayerPassiveLoadoutData();
};

