#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "State.generated.h"

UCLASS(Abstract, Blueprintable)
class UState : public UObject {
    GENERATED_BODY()
public:
    UState();

};

