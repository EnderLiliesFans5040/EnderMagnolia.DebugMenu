#include "GameLogicBPFLibrary.h"
#include "Templates/SubclassOf.h"

UGameLogicBPFLibrary::UGameLogicBPFLibrary() {
}

bool UGameLogicBPFLibrary::UnlockSkillLevel(UInventoryComponent* InventoryComponent, const FDataTableRowHandle& SkillHandle, int32 Level) {
    return false;
}

UUserWidgetTutorial* UGameLogicBPFLibrary::TryLaunchTutorialWidget(const UObject* WorldContextObject, const TSubclassOf<UUserWidgetTutorial> TutorialWidgetClass, const FDataTableRowHandle& TutorialHandle, const EUMGLayer UMGLayer) {
    return NULL;
}

void UGameLogicBPFLibrary::StopForceFeedbackByTag(APlayerController* PlayerController, FName Tag) {
}

void UGameLogicBPFLibrary::LaunchForceFeedback(APlayerController* PlayerController, UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused) {
}

int32 UGameLogicBPFLibrary::GetSPGaugeValue() {
    return 0;
}

int32 UGameLogicBPFLibrary::GetSkillLevelFromID(const UObject* WorldContextObject, const FName& SkillID) {
    return 0;
}

int32 UGameLogicBPFLibrary::GetSkillLevelFromHandle(const UObject* WorldContextObject, const FDataTableRowHandle& SkillHandle) {
    return 0;
}

int32 UGameLogicBPFLibrary::GetPlayerMaxSPLimit(const APlayerControllerZion* PlayerController) {
    return 0;
}

FExtendedStatsData UGameLogicBPFLibrary::GetPlayerMaxPossibleStats(const APlayerControllerZion* PlayerController) {
    return FExtendedStatsData{};
}

int32 UGameLogicBPFLibrary::GetPlayerMaxHPLimit(const APlayerControllerZion* PlayerController) {
    return 0;
}

int32 UGameLogicBPFLibrary::GetPlayerMaxHealPowerLimit(const APlayerControllerZion* PlayerController) {
    return 0;
}

int32 UGameLogicBPFLibrary::GetPlayerMaxHealCountLimit(const APlayerControllerZion* PlayerController) {
    return 0;
}

int32 UGameLogicBPFLibrary::GetPlayerMaxDefenseLimit(const APlayerControllerZion* PlayerController) {
    return 0;
}

int32 UGameLogicBPFLibrary::GetPlayerMaxAttackLimit(const APlayerControllerZion* PlayerController) {
    return 0;
}

int32 UGameLogicBPFLibrary::GetNextLevelForSkill(const UInventoryComponent* InventoryComponent, const FDataTableRowHandle& SkillHandle) {
    return 0;
}

int32 UGameLogicBPFLibrary::GetEquipLoadoutCount() {
    return 0;
}

bool UGameLogicBPFLibrary::CheckItemConditions(APlayerControllerZion* PlayerControllerZion, const FItemConditionData& ItemConditionData) {
    return false;
}

bool UGameLogicBPFLibrary::CheckGameplayConditions(APlayerController* PlayerController, const FGameplayConditionChecker& GameplayConditions) {
    return false;
}

ESkillUnlockResultType UGameLogicBPFLibrary::CanUnlockSkillLevel(const UInventoryComponent* InventoryComponent, const FDataTableRowHandle& SkillHandle, int32 Level) {
    return ESkillUnlockResultType::Invalid;
}

bool UGameLogicBPFLibrary::CanUnlockAnySkillLevel(const UInventoryComponent* InventoryComponent) {
    return false;
}


