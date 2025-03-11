#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "ECollisionProfile.h"
#include "CollisionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Within=Character, meta=(BlueprintSpawnableComponent))
class ZION_API UCollisionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideResponses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionResponseContainer ResponseOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>> SpecificResponseOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> HurtboxReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FComponentReference> CustomHurtboxReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CustomParryHurtboxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> HitboxReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCollisionResponseToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionResponse> OverrideCollisionResponseToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionProfile CollisionProfile;
    
public:
    UCollisionComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void RefreshHurtboxVisuals();
    
    UFUNCTION(BlueprintCallable)
    void RefreshHitboxVisuals();
    
};

