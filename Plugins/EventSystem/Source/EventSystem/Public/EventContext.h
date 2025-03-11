#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "EventContext.generated.h"

class AActor;
class AEventCamera;
class APawn;
class APlayerController;
class UEventAction;
class UEventAsset;
class UUserWidget;

UCLASS(Blueprintable)
class EVENTSYSTEM_API UEventContext : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEventAction*> PostSkipActions;
    
public:
    UEventContext();

    UFUNCTION(BlueprintCallable)
    void SetValueRowHandle(const FName& Key, const FDataTableRowHandle& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetValueObject(const FName& Key, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetValueName(const FName& Key, const FName& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetValueInteger(const FName& Key, const int32& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetValueBoolean(const FName& Key, const bool& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValueRowHandleSet(const FName& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValueObjectSet(const FName& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValueIntegerSet(const FName& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValueBooleanSet(const FName& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetValueRowHandle(const FName& Key, FDataTableRowHandle DefaultValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetValueObject(const FName& Key, UObject* DefaultValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetValueName(const FName& Key, FName DefaultValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValueInteger(const FName& Key, int32 DefaultValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueBoolean(const FName& Key, bool DefaultValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetGameViewTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetEventUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEventCamera* GetEventCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEventAsset* GetEventAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActorForBinding(FName ActorBinding) const;
    
};

