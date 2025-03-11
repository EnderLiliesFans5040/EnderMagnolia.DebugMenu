#pragma once
#include "CoreMinimal.h"
#include "PlayerPassiveLoadoutData.h"
#include "PlayerPassiveSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerPassiveSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLoadoutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerPassiveLoadoutData> Loadouts;
    
    ZION_API FPlayerPassiveSaveData();
};

