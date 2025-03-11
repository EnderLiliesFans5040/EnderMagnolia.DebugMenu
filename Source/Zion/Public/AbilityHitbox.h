#pragma once
#include "CoreMinimal.h"
#include "SpineFXData.h"
#include "Ability.h"
#include "AbilityData.h"
#include "ECollisionProfile.h"
#include "EFaction.h"
#include "EHitBoxTargetType.h"
#include "Templates/SubclassOf.h"
#include "AbilityHitbox.generated.h"

class USceneComponent;
class UState;

UCLASS(Abstract, Blueprintable)
class AAbilityHitbox : public AAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeProcessing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> IgnoreIfTargetHasAnyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHitBoxTargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECollisionProfile> CustomTargetCollisionProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFaction> CustomTargetFactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnReEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableReTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeReTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockOnOneWayPlatforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData OnContactFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbilityData> OnContactAbilityDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopOnBlockerOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData OnBlockerFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbilityData> OnBlockerAbilityDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
public:
    AAbilityHitbox(const FObjectInitializer& ObjectInitializer);

};

