#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EBreakType.h"
#include "EClearStatus.h"
#include "EEnemySpawnerClearTiming.h"
#include "EnemySpawnerEventDelegate.h"
#include "GameplayConditionChecker.h"
#include "Spawner.h"
#include "EnemySpawner.generated.h"

class AAIControllerZion;
class AActor;
class ACharacterZion;
class UBehaviorTree;
class UClearComponent;

UCLASS(Abstract, Blueprintable)
class ZION_API AEnemySpawner : public ASpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnerEvent OnEnemySpawnerDeathStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnerEvent OnEnemySpawnerDeathEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnerEvent OnEnemySpawnerActivation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UClearComponent* ClearComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseConditionChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayConditionChecker ConditionChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkAsClearedOnConditionFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle EnemyRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivateEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemySpawnerClearTiming ClearTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnEvenWhenCleared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockEnvironmentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> AdditionalGameMapsToLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncrementEnvironmentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideBehaviorIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBehaviorTree> BehaviorTreeOverride_Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideBehaviorAggression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBehaviorTree> BehaviorTreeOverride_Aggression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridePatrolRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PatrolRangeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> BlackboardOverride_Bool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> BlackboardOverride_Float;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVector> BlackboardOverride_Vector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AActor*> BlackboardOverride_Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCacheBreakPartState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBreakType EnemyPartBrokenType;
    
public:
    AEnemySpawner(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldSpawnEvenWhenCleared() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ReplaceEnemy(const FDataTableRowHandle& NewEnemyRowHandle, const FTransform& SpawnTransform);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnregisterEnemy(ACharacterZion* Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRegisterEnemy(ACharacterZion* Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyPreActivation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyDeathStart();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEnemyDeathProcessStart();
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyDeathProcessEnd();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyDeathEnd();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEnemyBreakPart(const EBreakType& BreakType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyActivation();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnClearStatusChecked(EClearStatus ClearStatus);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplyBlackboardOverride();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnemyActivated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAIControllerZion* GetEnemyAIController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacterZion* GetEnemy() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateEnemy();
    
};

