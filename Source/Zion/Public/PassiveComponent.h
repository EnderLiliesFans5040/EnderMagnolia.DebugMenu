#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPassiveEquipResult.h"
#include "InventoryItemPassiveData.h"
#include "PassiveDelegateDelegate.h"
#include "PassiveRuntimeData.h"
#include "PlayerPassiveLoadoutData.h"
#include "PassiveComponent.generated.h"

class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, Within=PlayerController, meta=(BlueprintSpawnableComponent))
class UPassiveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPassiveDelegate OnPassiveEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPassiveDelegate OnPassiveUnequipped;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPassiveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultSlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalSlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsedSlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLoadoutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPassiveRuntimeData> Passives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPassiveRuntimeData> PassivesToUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPlayerPassiveLoadoutData> PassiveLoadouts;
    
public:
    UPassiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UnequipPassive(const FName& PassiveID, int32& OutPassiveIndex, bool bRemoveFromCurrentLoadout);
    
    UFUNCTION(BlueprintCallable)
    void ReplacePassiveInAllLoadouts(const FName& PassiveToRemove, const FName& PassiveToAdd);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPassiveEquipped(const FName& PassiveID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUsedSlotCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPassiveRuntimeData> GetEquippedPassives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPassiveLoadoutIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableSlotCount() const;
    
    UFUNCTION(BlueprintCallable)
    void EquipPassiveLoadout(int32 LoadoutIndex);
    
    UFUNCTION(BlueprintCallable)
    EPassiveEquipResult EquipPassive(const FName& PassiveID, bool bAddToCurrentLoadout, int32 InsertIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPassiveEquipResult CanEquipPassive(const FInventoryItemPassiveData& ItemPassiveData) const;
    
};

