#include "ZionCharacterMovementComponent.h"

UZionCharacterMovementComponent::UZionCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTickBeforeOwner = false;
    this->bConstrainToPlane = true;
    this->bSnapToPlaneAtStart = true;
    this->bUseAccelerationForPaths = true;
    this->bUseFlatBaseForFloorChecks = true;
    this->bOverrideDefaultMovementMode = false;
    this->bDisableUpdateBasedMovementWhenAttached = false;
    this->bCheckForCollidersWhenNotMoving = false;
    this->bEnsureCapsuleFullyGrounded = false;
    this->SpeedFactor_Slow = 0.50f;
    this->SpeedFactor_Default = 1.00f;
    this->SpeedFactor_Fast = 1.00f;
    this->SpeedFactor_Fastest = 1.00f;
    this->FastSpeedModePreservingStates.AddDefaulted(1);
    this->bIgnoreInputVector = false;
    this->bUpdatePhysicsWhenInactive = false;
    this->bUseMaxFallVelocity = false;
    this->MaxFallVelocity = 2048.00f;
    this->bReleaseWallOnLateralInput = true;
    this->bReleaseWallOnDownInput = true;
    this->bReleaseWallOnAnyDownwardInput = false;
    this->WallGrabPostCollisionStates.AddDefaulted(1);
    this->WallGrabPostCollisionStatesDuration = 0.25f;
    this->BrakingDecelerationWallScaling = 2048.00f;
    this->SwimmingMaxAcceleration = 2048.00f;
    this->DefaultBuoyancy = 1.00f;
    this->DiveBuoyancy = 1.00f;
    this->bIgnoreDiveAptitude = false;
    this->FloatingImmersionDepth = 0.50f;
    this->SnapToFloatingDepthSpeed = 500.00f;
    this->ToFloatingDepthAcceleration = 1500.00f;
    this->MaxSlideFloorAngle = 75.00f;
    this->SlidingAcceleration = 2048.00f;
    this->MaxSlidingSpeed = 800.00f;
    this->JumpHigherZVelocity = 1500.00f;
}

void UZionCharacterMovementComponent::SetMovementSpeedMode(EMovementSpeedMode NewMovementSpeedMode) {
}

void UZionCharacterMovementComponent::SetMovementModeCustom(EMovementModeCustom NewMovementModeCustom) {
}

bool UZionCharacterMovementComponent::IsWallScaling() const {
    return false;
}

bool UZionCharacterMovementComponent::IsWallGrabbing() const {
    return false;
}

bool UZionCharacterMovementComponent::IsSliding() const {
    return false;
}

bool UZionCharacterMovementComponent::IsHookAttached() const {
    return false;
}

bool UZionCharacterMovementComponent::IsAirborne() const {
    return false;
}

float UZionCharacterMovementComponent::GetTimeSinceLastWallGrab() const {
    return 0.0f;
}

float UZionCharacterMovementComponent::GetTimeSinceLastHookAttach() const {
    return 0.0f;
}

float UZionCharacterMovementComponent::GetTimeSinceLastGrounded() const {
    return 0.0f;
}

EMovementSpeedMode UZionCharacterMovementComponent::GetMovementSpeedMode() const {
    return EMovementSpeedMode::None;
}

FVector UZionCharacterMovementComponent::GetLastNonFallingLocation() const {
    return FVector{};
}

FVector UZionCharacterMovementComponent::ComputeLaunchVelocityToDestination(const FVector& DestinationLocation, float Duration) const {
    return FVector{};
}


