#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Curves/CurveFloat.h"
#include "DifficultySettings.h"
#include "EDifficultyMode.h"
#include "EDifficultyPreset.h"
#include "DifficultySystemComponent.generated.h"

class UDifficultySystemComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, Within=GameModeBase, meta=(BlueprintSpawnableComponent))
class UDifficultySystemComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDifficultyPreset, FDifficultySettings> DifficultyForPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCurrencyFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCurrencyFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve MaxHPFactorCurrencyCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve AttackFactorCurrencyCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ActionFrequencyCurrencyCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve StaminaFactorCurrencyCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve StaminaRecoverySpeedFactorCurrencyCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDifficultyMode, EDifficultyPreset> DifficultyPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDifficultyMode, FDifficultySettings> DifficultySettings;
    
public:
    UDifficultySystemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDifficultyPresetAndSettings(EDifficultyPreset NewDifficultyPreset, const FDifficultySettings& NewDifficultySettings);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficultyMode(EDifficultyMode NewDifficultyMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyChallengeEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDifficultySettings GetDifficultySettingsForPreset(EDifficultyPreset InDifficultyPreset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDifficultySettings GetDifficultySettingsForMode(EDifficultyMode InDifficultyMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDifficultySettings GetDifficultySettings() const;
    
    UFUNCTION(BlueprintCallable)
    EDifficultyPreset GetDifficultyPresetFromSettings(const FDifficultySettings& InDifficultySettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDifficultyPreset GetDifficultyPresetForMode(EDifficultyMode InDifficultyMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDifficultyPreset GetDifficultyPreset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDifficultyMode GetDifficultyMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrencyFactorRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrencyFactor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDifficultySystemComponent* Get(const UObject* WorldContextObject);
    
};

