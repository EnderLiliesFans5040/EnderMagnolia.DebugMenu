#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpineFXData.h"
#include "DashChargeSettings.h"
#include "SoundData.h"
#include "Templates/SubclassOf.h"
#include "DashChargeComponent.generated.h"

class AAbility;
class ACharacterZionSpirit;
class UCommand;
class UFMODAudioComponent;
class UNiagaraComponent;
class UState;
class UTrackEntry;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZION_API UDashChargeComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashTimeForCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashTimeForChargeShort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeDashSpeedFactorToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData ChargingFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundData ChargingSoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData OnChargedFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundData OnChargedSoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData ChargedAuraFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> DashChargeStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDashChargeSettings DefaultSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDashChargeSettings SwimmingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacterZionSpirit> DefaultSpiritClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacterZionSpirit> SwimmingSpiritClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ChargingFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* ChargingAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* AuraFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAbility* Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacterZionSpirit* Spirit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* LoopAudioComponent;
    
public:
    UDashChargeComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnStartAnimation(UTrackEntry* TrackEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnCommandStart(const UCommand* Command);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDashCharged() const;
    
};

