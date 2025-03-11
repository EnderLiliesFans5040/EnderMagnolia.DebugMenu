#pragma once
#include "CoreMinimal.h"
#include "SummonStashElement.generated.h"

class UCommandSet;
class UInputAction;

USTRUCT(BlueprintType)
struct FSummonStashElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommandSet* CommandSet;
    
    ZION_API FSummonStashElement();
};

