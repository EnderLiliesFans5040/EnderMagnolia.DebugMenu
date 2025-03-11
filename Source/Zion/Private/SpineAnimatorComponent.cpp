#include "SpineAnimatorComponent.h"

USpineAnimatorComponent::USpineAnimatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUpdateLocomotion = true;
    this->MinVerticalVelocityForFallingUp = 10.00f;
    this->MinVerticalVelocityForFallingDown = -10.00f;
    this->MinVerticalVelocityForDashFallingUp = 10.00f;
    this->MinVerticalVelocityForDashFallingDown = -10.00f;
    this->MinVerticalVelocityForRideFallingUp = 10.00f;
    this->MinVerticalVelocityForRideFallingDown = -10.00f;
    this->LocomotionVectorSource = ELocomotionMoveSource::PendingInputVector;
    this->VelocityZForUp = 10.00f;
    this->VelocityZForDown = -10.00f;
    this->VelocityYForForward = 10.00f;
    this->FallbackMovementModeUse = EFallbackMovementModeUse::MovementNullOrInactive;
    this->bSyncLocomotionTrackTime = false;
    this->bAutoManageTurnAnimations = true;
    this->DamageAdditiveType = EDamageAdditiveType::Never;
    this->DamageAdditiveAnimation = TEXT("damage_add");
    this->DamageAdditiveForbiddenStates.AddDefaulted(1);
    this->bFlushOnStagger = false;
    this->SpineAnimation = NULL;
    this->RootMotionComponent = NULL;
    this->Character = NULL;
    this->ZionMovementComponent = NULL;
    this->KnockbackComponent = NULL;
    this->StunComponent = NULL;
    this->LocomotionComponent = NULL;
    this->StateComponent = NULL;
    this->DeathComponent = NULL;
    this->DashChargeComponent = NULL;
}

void USpineAnimatorComponent::StopAnimationAtLayer(ESpineAnimatorLayer Layer) {
}

void USpineAnimatorComponent::StopActionAnimations() {
}

void USpineAnimatorComponent::ResetLocomotionCycle() {
}

void USpineAnimatorComponent::ResetAnimations() {
}

void USpineAnimatorComponent::PlayTurnAnimations(const TArray<FSpineAnimationDefinition>& AnimationDefinitions) {
}

void USpineAnimatorComponent::PlayAnimationsWithDelegate(ESpineAnimatorLayer AnimatorLayer, const TArray<FSpineAnimationDefinition>& AnimationDefinitions, const FSpineAnimationDelegate& OnLayerEnd) {
}

void USpineAnimatorComponent::PlayAnimations(ESpineAnimatorLayer AnimatorLayer, const TArray<FSpineAnimationDefinition>& AnimationDefinitions) {
}

void USpineAnimatorComponent::PlayActionAnimationWithDelegate(const FSpineAnimationDefinition& AnimationDefinition, const FSpineAnimationDelegate& OnLayerEnd) {
}

void USpineAnimatorComponent::PlayActionAnimationsWithDelegate(const TArray<FSpineAnimationDefinition>& AnimationDefinitions, const FSpineAnimationDelegate& OnLayerEnd) {
}

void USpineAnimatorComponent::PlayActionAnimations(const TArray<FSpineAnimationDefinition>& AnimationDefinitions) {
}

void USpineAnimatorComponent::PlayActionAnimation(const FSpineAnimationDefinition& AnimationDefinition) {
}

void USpineAnimatorComponent::OnLayerInterrupt(UTrackEntry* TrackEntry) {
}

void USpineAnimatorComponent::OnLayerComplete(UTrackEntry* TrackEntry) {
}

void USpineAnimatorComponent::OnFacingChanged() {
}

void USpineAnimatorComponent::OnAnyAnimationInterrupt(UTrackEntry* TrackEntry) {
}

void USpineAnimatorComponent::OnAnyAnimationComplete(UTrackEntry* TrackEntry) {
}

void USpineAnimatorComponent::OnAnimationInterrupt(UTrackEntry* TrackEntry) {
}

void USpineAnimatorComponent::OnAnimationComplete(UTrackEntry* TrackEntry) {
}

bool USpineAnimatorComponent::IsPlayingAnimationOnLayer(ESpineAnimatorLayer Layer) const {
    return false;
}

FVector USpineAnimatorComponent::GetLastVelocity() const {
    return FVector{};
}

bool USpineAnimatorComponent::GetHistoryDataAtIndex(int32 Index, FSpineAnimatorHistoryData& out_Result) const {
    return false;
}

UTrackEntry* USpineAnimatorComponent::GetCurrentTrackEntry() const {
    return NULL;
}

ESpineAnimatorLayer USpineAnimatorComponent::GetCurrentLayer() const {
    return ESpineAnimatorLayer::None;
}

float USpineAnimatorComponent::GetCurrentAnimationPlayTime() const {
    return 0.0f;
}

FString USpineAnimatorComponent::GetCurrentAnimationName() const {
    return TEXT("");
}


