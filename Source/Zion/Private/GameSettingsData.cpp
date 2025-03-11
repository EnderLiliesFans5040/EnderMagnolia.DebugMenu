#include "GameSettingsData.h"

FGameSettingsData::FGameSettingsData() {
    this->bInitialSettingsDone = false;
    this->bAutoUploadCrashReport = false;
    this->Gamma = 0.00f;
    this->ResolutionScale = 0.00f;
    this->bDisplayDamageValues = false;
    this->bDisplayHealValues = false;
    this->bDisplayHPAboveGauge = false;
    this->ControllerVibration = 0.00f;
    this->CameraShake = 0.00f;
    this->bCameraOscillation = false;
    this->bHoldDownToDodgeStill = false;
    this->AutoClimbDirectionMode = EAutoClimbDirectionMode::None;
    this->bDisplayPlayerUI = false;
    this->bDisplayEnemyGauges = false;
    this->bDisplayTutorials = false;
    this->bAutoSkipAlreadySeenEvents = false;
    this->bDisplayAchievementNotifications = false;
    this->ConstraintCameraAspectRatio = EConstraintCameraAspectRatio::CameraAR_Off;
    this->AntiAliasingMethod = AAM_None;
    this->UIAspectRatio = EConstraintCameraAspectRatio::CameraAR_Off;
    this->bConstraintHUDAspectRatio = false;
    this->LeftStickDeadZone = 0.00f;
    this->RightStickDeadZone = 0.00f;
    this->TitleScreenType = EGameEndingType::None;
    this->LowHPFeedbackOpacity = 0.00f;
}

