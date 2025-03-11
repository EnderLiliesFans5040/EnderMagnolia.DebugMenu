#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "EnemyRepulsionData.generated.h"

USTRUCT(BlueprintType)
struct FEnemyRepulsionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeedReductionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ForceFactorCurve;
    
    ZION_API FEnemyRepulsionData();
};

