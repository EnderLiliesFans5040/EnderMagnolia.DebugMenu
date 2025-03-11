#include "GameSettingsSubsystem.h"

UGameSettingsSubsystem::UGameSettingsSubsystem() {
}

EConstraintCameraAspectRatio UGameSettingsSubsystem::SetUIAspectRatio(const EConstraintCameraAspectRatio& NewUIAspectRatio) {
    return EConstraintCameraAspectRatio::CameraAR_Off;
}

void UGameSettingsSubsystem::SetTitleType(EGameEndingType TitleType) {
}

float UGameSettingsSubsystem::SetStickDeadZone(const EInputStick& InputStick, float NewDeadZone) {
    return 0.0f;
}

float UGameSettingsSubsystem::SetResolutionScale(float NewResolutionScale) {
    return 0.0f;
}

float UGameSettingsSubsystem::SetLowHPFeedbackOpacity(float NewLowHPFeedbackOpacity) {
    return 0.0f;
}

void UGameSettingsSubsystem::SetLanguage(const FString& Language) {
}

void UGameSettingsSubsystem::SetInitialSettingsDone() {
}

bool UGameSettingsSubsystem::SetHoldDownToDodgeStill(bool bEnable) {
    return false;
}

float UGameSettingsSubsystem::SetGammaPercentage(float NewGammaPercentage) {
    return 0.0f;
}

float UGameSettingsSubsystem::SetGamma(float NewGamma) {
    return 0.0f;
}

bool UGameSettingsSubsystem::SetDisplayTutorials(bool bDisplay) {
    return false;
}

bool UGameSettingsSubsystem::SetDisplayPlayerUI(bool bDisplay) {
    return false;
}

bool UGameSettingsSubsystem::SetDisplayHPAboveGauge(bool bDisplayHPAboveGauge) {
    return false;
}

bool UGameSettingsSubsystem::SetDisplayHealValues(bool bDisplayHealValues) {
    return false;
}

bool UGameSettingsSubsystem::SetDisplayEnemyGauges(bool bDisplay) {
    return false;
}

bool UGameSettingsSubsystem::SetDisplayDamageValues(bool bDisplayDamageValues) {
    return false;
}

bool UGameSettingsSubsystem::SetDisplayAchievementNotifications(bool bDisplay) {
    return false;
}

float UGameSettingsSubsystem::SetControllerVibration(float NewControllerVibration) {
    return 0.0f;
}

bool UGameSettingsSubsystem::SetConstraintHUDAspectRatio(bool bNewConstraintHUDAspectRatio) {
    return false;
}

EConstraintCameraAspectRatio UGameSettingsSubsystem::SetConstraintCameraAspectRatio(const EConstraintCameraAspectRatio& NewConstraintCameraAspectRatio) {
    return EConstraintCameraAspectRatio::CameraAR_Off;
}

float UGameSettingsSubsystem::SetCameraShake(float NewCameraShake) {
    return 0.0f;
}

bool UGameSettingsSubsystem::SetCameraOscillation(bool bEnable) {
    return false;
}

void UGameSettingsSubsystem::SetAutoUploadCrashReport(bool bNewAutoUploadCrashReport) {
}

bool UGameSettingsSubsystem::SetAutoSkipAlreadySeenEvents(bool bAutoSkip) {
    return false;
}

EAutoClimbDirectionMode UGameSettingsSubsystem::SetAutoClimbDirectionMode(EAutoClimbDirectionMode NewMode) {
    return EAutoClimbDirectionMode::None;
}

TEnumAsByte<EAntiAliasingMethod> UGameSettingsSubsystem::SetAntiAliasingMethod(const TEnumAsByte<EAntiAliasingMethod>& NewAntiAliasingMethod) {
    return AAM_None;
}

void UGameSettingsSubsystem::ResetToDefault(EGameSettingsType GameSettingsToReset) {
}

void UGameSettingsSubsystem::ResetSticksDeadZone() {
}

float UGameSettingsSubsystem::ResetResolutionScale() {
    return 0.0f;
}

float UGameSettingsSubsystem::ResetLowHPFeedbackOpacity() {
    return 0.0f;
}

bool UGameSettingsSubsystem::ResetHoldDownToDodgeStill() {
    return false;
}

bool UGameSettingsSubsystem::ResetDisplayTutorials() {
    return false;
}

bool UGameSettingsSubsystem::ResetDisplayPlayerUI() {
    return false;
}

bool UGameSettingsSubsystem::ResetDisplayHPAboveGauge() {
    return false;
}

bool UGameSettingsSubsystem::ResetDisplayHealValues() {
    return false;
}

bool UGameSettingsSubsystem::ResetDisplayEnemyGauges() {
    return false;
}

bool UGameSettingsSubsystem::ResetDisplayDamageValues() {
    return false;
}

bool UGameSettingsSubsystem::ResetDisplayAchievementNotifications() {
    return false;
}

float UGameSettingsSubsystem::ResetControllerVibration() {
    return 0.0f;
}

float UGameSettingsSubsystem::ResetCameraShake() {
    return 0.0f;
}

bool UGameSettingsSubsystem::ResetCameraOscillation() {
    return false;
}

bool UGameSettingsSubsystem::ResetAutoSkipAlreadySeenEvents() {
    return false;
}

EAutoClimbDirectionMode UGameSettingsSubsystem::ResetAutoClimbDirectionMode() {
    return EAutoClimbDirectionMode::None;
}

void UGameSettingsSubsystem::ResetAspectRatio() {
}

void UGameSettingsSubsystem::ResetAntiAliasingMethod() {
}

bool UGameSettingsSubsystem::IsInitialSettingsDone() const {
    return false;
}

EConstraintCameraAspectRatio UGameSettingsSubsystem::GetUIAspectRatio() const {
    return EConstraintCameraAspectRatio::CameraAR_Off;
}

EGameEndingType UGameSettingsSubsystem::GetTitleType() const {
    return EGameEndingType::None;
}

float UGameSettingsSubsystem::GetStickDeadZone(const EInputStick& InputStick) const {
    return 0.0f;
}

float UGameSettingsSubsystem::GetResolutionScale() const {
    return 0.0f;
}

float UGameSettingsSubsystem::GetMinResolutionScale() {
    return 0.0f;
}

float UGameSettingsSubsystem::GetMaxResolutionScale() {
    return 0.0f;
}

float UGameSettingsSubsystem::GetLowHPFeedbackOpacity() const {
    return 0.0f;
}

FString UGameSettingsSubsystem::GetLanguage() const {
    return TEXT("");
}

bool UGameSettingsSubsystem::GetHoldDownToDodgeStill() const {
    return false;
}

float UGameSettingsSubsystem::GetGammaPercentage() const {
    return 0.0f;
}

float UGameSettingsSubsystem::GetGammaMin() const {
    return 0.0f;
}

float UGameSettingsSubsystem::GetGammaMax() const {
    return 0.0f;
}

float UGameSettingsSubsystem::GetGammaDefault() const {
    return 0.0f;
}

float UGameSettingsSubsystem::GetGamma() const {
    return 0.0f;
}

bool UGameSettingsSubsystem::GetDisplayTutorials() const {
    return false;
}

bool UGameSettingsSubsystem::GetDisplayPlayerUI() const {
    return false;
}

bool UGameSettingsSubsystem::GetDisplayHPAboveGauge() const {
    return false;
}

bool UGameSettingsSubsystem::GetDisplayHealValues() const {
    return false;
}

bool UGameSettingsSubsystem::GetDisplayEnemyGauges() const {
    return false;
}

bool UGameSettingsSubsystem::GetDisplayDamageValues() const {
    return false;
}

bool UGameSettingsSubsystem::GetDisplayAchievementNotifications() const {
    return false;
}

float UGameSettingsSubsystem::GetControllerVibration() const {
    return 0.0f;
}

bool UGameSettingsSubsystem::GetConstraintHUDAspectRatio() const {
    return false;
}

EConstraintCameraAspectRatio UGameSettingsSubsystem::GetConstraintCameraAspectRatio() const {
    return EConstraintCameraAspectRatio::CameraAR_Off;
}

float UGameSettingsSubsystem::GetCameraShake() const {
    return 0.0f;
}

bool UGameSettingsSubsystem::GetCameraOscillation() const {
    return false;
}

bool UGameSettingsSubsystem::GetAutoUploadCrashReport() const {
    return false;
}

bool UGameSettingsSubsystem::GetAutoSkipAlreadySeenEvents() const {
    return false;
}

EAutoClimbDirectionMode UGameSettingsSubsystem::GetAutoClimbDirectionMode() const {
    return EAutoClimbDirectionMode::None;
}

TEnumAsByte<EAntiAliasingMethod> UGameSettingsSubsystem::GetAntiAliasingMethod() const {
    return AAM_None;
}

bool UGameSettingsSubsystem::DidReachGameEnding(EGameEndingType GameEndingType) const {
    return false;
}

bool UGameSettingsSubsystem::DidReachAnyGameEnding() const {
    return false;
}


