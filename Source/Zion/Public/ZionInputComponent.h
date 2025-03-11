#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EInputMappingPriority.h"
#include "ZionInputComponent.generated.h"

class APawn;
class UEnhancedInputComponent;
class UInputAction;
class UInputMappingContext;
class UStatSPComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Within=Character, meta=(BlueprintSpawnableComponent))
class ZION_API UZionInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UInputMappingContext*, EInputMappingPriority> InputContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction_Movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction_SpecialModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UInputAction*> InputActions_Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* OwnerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnhancedInputComponent* CachedEnhancedInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStatSPComponent* SPComponent;
    
public:
    UZionInputComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveInputMappingContext(const UInputMappingContext* InputMappingContext);
    
    UFUNCTION(BlueprintCallable)
    void AddInputMappingContext(const UInputMappingContext* InputMappingContext, EInputMappingPriority Priority);
    
};

