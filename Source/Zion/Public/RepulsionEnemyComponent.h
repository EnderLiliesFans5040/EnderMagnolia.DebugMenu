#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "EEnemyRepulsionOrigin.h"
#include "EnemyRepulsionData.h"
#include "EnemyRepulsionSetupData.h"
#include "MovementModeData.h"
#include "Templates/SubclassOf.h"
#include "RepulsionEnemyComponent.generated.h"

class AActor;
class ACharacter;
class UPrimitiveComponent;
class UState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZION_API URepulsionEnemyComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> IgnoreRepulsionStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableRepulsion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyRepulsionOrigin RepulsionOriginType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyRepulsionData DefaultRepulsionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyRepulsionSetupData> RepulsionSetupDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementModeData> IgnoreRepulsionMovementModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacter* CharacterOwner;
    
public:
    URepulsionEnemyComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

