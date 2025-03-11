#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "ESkillUnlockResultType.h"
#include "EUMGLayer.h"
#include "ExtendedStatsData.h"
#include "GameplayConditionChecker.h"
#include "ItemConditionData.h"
#include "Templates/SubclassOf.h"
#include "GameLogicBPFLibrary.generated.h"

class APlayerController;
class APlayerControllerZion;
class UForceFeedbackEffect;
class UInventoryComponent;
class UObject;
class UUserWidgetTutorial;

UCLASS(Blueprintable)
class UGameLogicBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameLogicBPFLibrary();

    UFUNCTION(BlueprintCallable)
    static bool UnlockSkillLevel(UInventoryComponent* InventoryComponent, const FDataTableRowHandle& SkillHandle, int32 Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UUserWidgetTutorial* TryLaunchTutorialWidget(const UObject* WorldContextObject, const TSubclassOf<UUserWidgetTutorial> TutorialWidgetClass, const FDataTableRowHandle& TutorialHandle, const EUMGLayer UMGLayer);
    
    UFUNCTION(BlueprintCallable)
    static void StopForceFeedbackByTag(APlayerController* PlayerController, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    static void LaunchForceFeedback(APlayerController* PlayerController, UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSPGaugeValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSkillLevelFromID(const UObject* WorldContextObject, const FName& SkillID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSkillLevelFromHandle(const UObject* WorldContextObject, const FDataTableRowHandle& SkillHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerMaxSPLimit(const APlayerControllerZion* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExtendedStatsData GetPlayerMaxPossibleStats(const APlayerControllerZion* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerMaxHPLimit(const APlayerControllerZion* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerMaxHealPowerLimit(const APlayerControllerZion* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerMaxHealCountLimit(const APlayerControllerZion* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerMaxDefenseLimit(const APlayerControllerZion* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerMaxAttackLimit(const APlayerControllerZion* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNextLevelForSkill(const UInventoryComponent* InventoryComponent, const FDataTableRowHandle& SkillHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEquipLoadoutCount();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckItemConditions(APlayerControllerZion* PlayerControllerZion, const FItemConditionData& ItemConditionData);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckGameplayConditions(APlayerController* PlayerController, const FGameplayConditionChecker& GameplayConditions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESkillUnlockResultType CanUnlockSkillLevel(const UInventoryComponent* InventoryComponent, const FDataTableRowHandle& SkillHandle, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanUnlockAnySkillLevel(const UInventoryComponent* InventoryComponent);
    
};

