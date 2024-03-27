#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecoratorZion.h"
#include "EBorderType.h"
#include "BTDecorator_IsInBorderRange.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_IsInBorderRange : public UBTDecoratorZion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBorderType BorderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableRange;
    
public:
    UBTDecorator_IsInBorderRange();

};

