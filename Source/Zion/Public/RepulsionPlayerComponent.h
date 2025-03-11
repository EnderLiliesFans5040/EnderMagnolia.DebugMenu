#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovementModeData.h"
#include "Templates/SubclassOf.h"
#include "RepulsionPlayerComponent.generated.h"

class UCollisionComponent;
class UPrimitiveComponent;
class URepulsionEnemyComponent;
class UState;
class UStateComponent;
class UZionCharacterMovementComponent;
class UZionInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URepulsionPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisableForceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoEnemyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimmingForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> IgnoreRepulsionStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementModeData> IgnoreMovementModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UZionInputComponent* InputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UZionCharacterMovementComponent* ZionMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStateComponent* StateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCollisionComponent* CollisionComponent;
    
public:
    URepulsionPlayerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveRepulsionEnemyComponent(URepulsionEnemyComponent* RepulsionEnemyComponent, UPrimitiveComponent* Collider);
    
    UFUNCTION(BlueprintCallable)
    void AddRepulsionEnemyComponent(URepulsionEnemyComponent* RepulsionEnemyComponent, UPrimitiveComponent* Collider);
    
};

