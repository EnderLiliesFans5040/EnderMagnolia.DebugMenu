#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ERespawnReason.h"
#include "FadeDescriptionData.h"
#include "RecollectionBossBaseComponent.generated.h"

class AEnemySpawner;
class UUserWidgetDialogYesNo;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URecollectionBossBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERespawnReason ExitRespawnReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERespawnReason RetryRespawnReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DialogMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivateBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoActivationTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidgetDialogYesNo> DialogYesNoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeDescriptionData FadeDescription;
    
public:
    URecollectionBossBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetNewGameGenerationOverride(int32 GenerationOverride);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RetryRecollectionMode_PostFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void RetryRecollectionMode();
    
    UFUNCTION(BlueprintCallable)
    void OnRetryDialogYes();
    
    UFUNCTION(BlueprintCallable)
    void OnRetryDialogNo();
    
    UFUNCTION(BlueprintCallable)
    void OnDialogClosed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStarted() const;
    
    UFUNCTION(BlueprintCallable)
    bool InstantiateRetryDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNewGameGenerationOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEnemySpawner* GetCachedEnemySpawner() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GameMapChange();
    
public:
    UFUNCTION(BlueprintCallable)
    void Finish();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExitRecollectionMode_PostFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void ExitRecollectionMode();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLeaveRecollectionBoss() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BossDeathStart(AEnemySpawner* EnemySpawner);
    
    UFUNCTION(BlueprintCallable)
    void BossDeathEndPostDelay();
    
    UFUNCTION(BlueprintCallable)
    void BossDeathEnd(AEnemySpawner* EnemySpawner);
    
    UFUNCTION(BlueprintCallable)
    void BossActivation(AEnemySpawner* EnemySpawner);
    
};

