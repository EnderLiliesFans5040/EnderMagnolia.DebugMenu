#pragma once
#include "CoreMinimal.h"
#include "RegenerativeParamEventDelegate.h"
#include "StatBreakableData.h"
#include "StatBreakableMultiplicativeData.h"
#include "StatComponent.h"
#include "Templates/SubclassOf.h"
#include "StatBreakableComponent.generated.h"

class UState;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStatBreakableComponent : public UStatComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegenerativeParamEvent OnBreakDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegenerativeParamEvent OnInvincibilityStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegenerativeParamEvent OnInvincibilityEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> RegenerationBlockingStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> BreakBlockingStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> BreakRecoveryBlockingStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> CompleteBlockingStates;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatBreakableData DefaultParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMultiplicativeParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatBreakableMultiplicativeData MultiplicativeParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAdditiveParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatBreakableData AdditiveParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampMinParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatBreakableData MinParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampMaxParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatBreakableData MaxParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatBreakableData CurrParameters;
    
public:
    UStatBreakableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetIsImmune(bool bImmune);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBreak();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvincible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBroken() const;
    
};

