#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlot.h"
#include "PlayerEquipmentLoadoutData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerEquipmentLoadoutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEquipmentSlot, FName> EquippedItems;
    
    ZION_API FPlayerEquipmentLoadoutData();
};

