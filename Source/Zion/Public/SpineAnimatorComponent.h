#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EDamageAdditiveType.h"
#include "EFallbackMovementModeUse.h"
#include "ELocomotionMoveSource.h"
#include "ESpineAnimatorLayer.h"
#include "MovementModeData.h"
#include "SpineAnimationDefinition.h"
#include "SpineAnimationDelegateDelegate.h"
#include "SpineAnimationStaggerDefinitions.h"
#include "SpineAnimationTransitionDefinition.h"
#include "SpineAnimatorHistoryData.h"
#include "Templates/SubclassOf.h"
#include "SpineAnimatorComponent.generated.h"

class ACharacter;
class UDashChargeComponent;
class UDeathComponent;
class UKnockbackComponent;
class ULocomotionComponent;
class USpineRootMotionComponent;
class USpineSkeletonAnimationComponent;
class UState;
class UStateComponent;
class UStunComponent;
class UTrackEntry;
class UZionCharacterMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Within=Character, meta=(BlueprintSpawnableComponent))
class USpineAnimatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateLocomotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVerticalVelocityForFallingUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVerticalVelocityForFallingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVerticalVelocityForDashFallingUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVerticalVelocityForDashFallingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVerticalVelocityForRideFallingUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVerticalVelocityForRideFallingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELocomotionMoveSource LocomotionVectorSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityZForUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityZForDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityYForForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementModeData FallbackMovementModeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFallbackMovementModeUse FallbackMovementModeUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSyncLocomotionTrackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoManageTurnAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageAdditiveType DamageAdditiveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DamageAdditiveAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> DamageAdditiveForbiddenStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlushOnStagger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> EventIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> EventTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionRide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionFallingUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionFallingNeutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionFallingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionDashFallingUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionDashFallingNeutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionDashFallingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionRideFallingUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionRideFallingNeutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionRideFallingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionFallingKnockbackUp_Forward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionFallingKnockbackUp_Backward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionFallingKnockbackNeutral_Forward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionFallingKnockbackNeutral_Backward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionFallingKnockbackDown_Forward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionFallingKnockbackDown_Backward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionWallGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionHookAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionSwimIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionSwimLateral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionUnderwaterIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionUnderwaterUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionUnderwaterUpLateral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionUnderwaterDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionUnderwaterDownLateral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionUnderwaterLateral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionUnderwaterDashUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionUnderwaterDashUpLateral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionUnderwaterDashDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionUnderwaterDashDownLateral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionUnderwaterDashLateral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionUnderwaterRideUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionUnderwaterRideUpLateral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionUnderwaterRideDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionUnderwaterRideDownLateral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionUnderwaterRideLateral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionFlyIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionFly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionFlyUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionFlyDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionWallScalingIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionWallScalingForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LocomotionWallScalingBackward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationStaggerDefinitions> KnockbackStaggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationStaggerDefinitions> KnockbackStaggersSwimming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> KnockbackLaunchLand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> KnockbackLaunchLandBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> KnockbackLaunchStagger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> KnockbackLaunchRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> Stun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> StunRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> TurnGrounded_Slow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> TurnGrounded_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> TurnGrounded_Fast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> TurnSwim_Slow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> TurnSwim_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> TurnUnderwater_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> TurnUnderwater_Dash_Up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> TurnUnderwater_Dash_Down;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> TurnUnderwater_Ride_Up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> TurnUnderwater_Ride_Down;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> TurnFlying_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationTransitionDefinition> TransitionDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpineSkeletonAnimationComponent* SpineAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpineRootMotionComponent* RootMotionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UZionCharacterMovementComponent* ZionMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKnockbackComponent* KnockbackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStunComponent* StunComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULocomotionComponent* LocomotionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStateComponent* StateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDeathComponent* DeathComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDashChargeComponent* DashChargeComponent;
    
public:
    USpineAnimatorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAnimationAtLayer(ESpineAnimatorLayer Layer);
    
    UFUNCTION(BlueprintCallable)
    void StopActionAnimations();
    
    UFUNCTION(BlueprintCallable)
    void ResetLocomotionCycle();
    
    UFUNCTION(BlueprintCallable)
    void ResetAnimations();
    
    UFUNCTION(BlueprintCallable)
    void PlayTurnAnimations(const TArray<FSpineAnimationDefinition>& AnimationDefinitions);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationsWithDelegate(ESpineAnimatorLayer AnimatorLayer, const TArray<FSpineAnimationDefinition>& AnimationDefinitions, const FSpineAnimationDelegate& OnLayerEnd);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimations(ESpineAnimatorLayer AnimatorLayer, const TArray<FSpineAnimationDefinition>& AnimationDefinitions);
    
    UFUNCTION(BlueprintCallable)
    void PlayActionAnimationWithDelegate(const FSpineAnimationDefinition& AnimationDefinition, const FSpineAnimationDelegate& OnLayerEnd);
    
    UFUNCTION(BlueprintCallable)
    void PlayActionAnimationsWithDelegate(const TArray<FSpineAnimationDefinition>& AnimationDefinitions, const FSpineAnimationDelegate& OnLayerEnd);
    
    UFUNCTION(BlueprintCallable)
    void PlayActionAnimations(const TArray<FSpineAnimationDefinition>& AnimationDefinitions);
    
    UFUNCTION(BlueprintCallable)
    void PlayActionAnimation(const FSpineAnimationDefinition& AnimationDefinition);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLayerInterrupt(UTrackEntry* TrackEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnLayerComplete(UTrackEntry* TrackEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnFacingChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnAnyAnimationInterrupt(UTrackEntry* TrackEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyAnimationComplete(UTrackEntry* TrackEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationInterrupt(UTrackEntry* TrackEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationComplete(UTrackEntry* TrackEntry);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAnimationOnLayer(ESpineAnimatorLayer Layer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHistoryDataAtIndex(int32 Index, FSpineAnimatorHistoryData& out_Result) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTrackEntry* GetCurrentTrackEntry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpineAnimatorLayer GetCurrentLayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAnimationPlayTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentAnimationName() const;
    
};

