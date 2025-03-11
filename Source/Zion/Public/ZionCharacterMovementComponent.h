#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EMovementModeCustom.h"
#include "EMovementSpeedMode.h"
#include "MovementModeData.h"
#include "MovementResultDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "ZionCharacterMovementComponent.generated.h"

class UState;

UCLASS(Blueprintable, ClassGroup=Custom, Within=Character, meta=(BlueprintSpawnableComponent))
class ZION_API UZionCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementResultDelegate OnMoveBlockedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDefaultMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementModeData DefaultMovementModeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableUpdateBasedMovementWhenAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckForCollidersWhenNotMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnsureCapsuleFullyGrounded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedFactor_Slow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedFactor_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedFactor_Fast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedFactor_Fastest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> FastSpeedModePreservingStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreInputVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdatePhysicsWhenInactive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMaxFallVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFallVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReleaseWallOnLateralInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReleaseWallOnDownInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReleaseWallOnAnyDownwardInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> WallGrabPostCollisionStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallGrabPostCollisionStatesDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakingDecelerationWallScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimmingMaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultBuoyancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiveBuoyancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreDiveAptitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatingImmersionDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapToFloatingDepthSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToFloatingDepthAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSlideFloorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSlidingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpHigherZVelocity;
    
public:
    UZionCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMovementSpeedMode(EMovementSpeedMode NewMovementSpeedMode);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementModeCustom(EMovementModeCustom NewMovementModeCustom);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWallScaling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWallGrabbing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHookAttached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAirborne() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastWallGrab() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastHookAttach() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastGrounded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMovementSpeedMode GetMovementSpeedMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastNonFallingLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ComputeLaunchVelocityToDestination(const FVector& DestinationLocation, float Duration) const;
    
};

