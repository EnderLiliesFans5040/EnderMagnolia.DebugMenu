#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlot.h"
#include "PlayerEquipmentLoadoutData.h"
#include "PlayerEquipmentSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerEquipmentSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEquipmentSlot, FName> EquippedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLoadoutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerEquipmentLoadoutData> Loadouts;
    
    ZION_API FPlayerEquipmentSaveData();
};

