#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EquippedAssist.h"
#include "InventoryItemAssistData.h"
#include "PlayerAssistLoadoutData.h"
#include "AssistComponent.generated.h"

class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAssistComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEquippedAssist EquippedAssist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLoadoutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPlayerAssistLoadoutData> AssistLoadouts;
    
public:
    UAssistComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnEquipAssist(bool bRemoveFromCurrentLoadout);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInventoryItemAssistData GetEquippedAssistData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAssistLoadoutIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAssistID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInventoryItemAssistData GetAssistDataFromID(const FName& AssistID) const;
    
    UFUNCTION(BlueprintCallable)
    void EquipAssistLoadout(int32 LoadoutIndex);
    
    UFUNCTION(BlueprintCallable)
    void EquipAssist(const FName& AssistID, bool bAddToCurrentLoadout);
    
};

