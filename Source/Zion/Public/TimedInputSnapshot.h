#pragma once
#include "CoreMinimal.h"
#include "InputSnapshot.h"
#include "TimedInputSnapshot.generated.h"

USTRUCT(BlueprintType)
struct FTimedInputSnapshot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputSnapshot InputSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> ProcessedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProcessedExactly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProcessedTime;
    
    ZION_API FTimedInputSnapshot();
};

