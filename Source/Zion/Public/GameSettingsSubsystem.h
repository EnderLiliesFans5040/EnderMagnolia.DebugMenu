#pragma once
#include "CoreMinimal.h"
#include "SceneUtils.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EAutoClimbDirectionMode.h"
#include "EConstraintCameraAspectRatio.h"
#include "EGameEndingType.h"
#include "EGameSettingsType.h"
#include "EInputStick.h"
#include "GameSettingsDelegateDelegate.h"
#include "GameSettingsSubsystem.generated.h"

UCLASS(Blueprintable)
class UGameSettingsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSettingsDelegate OnAutoUploadCrashReportChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSettingsDelegate OnDisplayHPAboveGaugeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSettingsDelegate OnDisplaySPAboveGaugeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSettingsDelegate OnDisplayPlayerUIChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSettingsDelegate OnDisplayEnemyGaugesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSettingsDelegate OnDisplayAchievementNotificationsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSettingsDelegate OnConstraintHUDAspectRatioChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSettingsDelegate OnAutoClimbDirectionModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSettingsDelegate OnLowHPFeedbackOpacityChanged;
    
    UGameSettingsSubsystem();

    UFUNCTION(BlueprintCallable)
    EConstraintCameraAspectRatio SetUIAspectRatio(const EConstraintCameraAspectRatio& NewUIAspectRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetTitleType(EGameEndingType TitleType);
    
    UFUNCTION(BlueprintCallable)
    float SetStickDeadZone(const EInputStick& InputStick, float NewDeadZone);
    
    UFUNCTION(BlueprintCallable)
    float SetResolutionScale(float NewResolutionScale);
    
    UFUNCTION(BlueprintCallable)
    float SetLowHPFeedbackOpacity(float NewLowHPFeedbackOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetLanguage(const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialSettingsDone();
    
    UFUNCTION(BlueprintCallable)
    bool SetHoldDownToDodgeStill(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    float SetGammaPercentage(float NewGammaPercentage);
    
    UFUNCTION(BlueprintCallable)
    float SetGamma(float NewGamma);
    
    UFUNCTION(BlueprintCallable)
    bool SetDisplayTutorials(bool bDisplay);
    
    UFUNCTION(BlueprintCallable)
    bool SetDisplayPlayerUI(bool bDisplay);
    
    UFUNCTION(BlueprintCallable)
    bool SetDisplayHPAboveGauge(bool bDisplayHPAboveGauge);
    
    UFUNCTION(BlueprintCallable)
    bool SetDisplayHealValues(bool bDisplayHealValues);
    
    UFUNCTION(BlueprintCallable)
    bool SetDisplayEnemyGauges(bool bDisplay);
    
    UFUNCTION(BlueprintCallable)
    bool SetDisplayDamageValues(bool bDisplayDamageValues);
    
    UFUNCTION(BlueprintCallable)
    bool SetDisplayAchievementNotifications(bool bDisplay);
    
    UFUNCTION(BlueprintCallable)
    float SetControllerVibration(float NewControllerVibration);
    
    UFUNCTION(BlueprintCallable)
    bool SetConstraintHUDAspectRatio(bool bNewConstraintHUDAspectRatio);
    
    UFUNCTION(BlueprintCallable)
    EConstraintCameraAspectRatio SetConstraintCameraAspectRatio(const EConstraintCameraAspectRatio& NewConstraintCameraAspectRatio);
    
    UFUNCTION(BlueprintCallable)
    float SetCameraShake(float NewCameraShake);
    
    UFUNCTION(BlueprintCallable)
    bool SetCameraOscillation(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoUploadCrashReport(bool bNewAutoUploadCrashReport);
    
    UFUNCTION(BlueprintCallable)
    bool SetAutoSkipAlreadySeenEvents(bool bAutoSkip);
    
    UFUNCTION(BlueprintCallable)
    EAutoClimbDirectionMode SetAutoClimbDirectionMode(EAutoClimbDirectionMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EAntiAliasingMethod> SetAntiAliasingMethod(const TEnumAsByte<EAntiAliasingMethod>& NewAntiAliasingMethod);
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefault(EGameSettingsType GameSettingsToReset);
    
    UFUNCTION(BlueprintCallable)
    void ResetSticksDeadZone();
    
    UFUNCTION(BlueprintCallable)
    float ResetResolutionScale();
    
    UFUNCTION(BlueprintCallable)
    float ResetLowHPFeedbackOpacity();
    
    UFUNCTION(BlueprintCallable)
    bool ResetHoldDownToDodgeStill();
    
    UFUNCTION(BlueprintCallable)
    bool ResetDisplayTutorials();
    
    UFUNCTION(BlueprintCallable)
    bool ResetDisplayPlayerUI();
    
    UFUNCTION(BlueprintCallable)
    bool ResetDisplayHPAboveGauge();
    
    UFUNCTION(BlueprintCallable)
    bool ResetDisplayHealValues();
    
    UFUNCTION(BlueprintCallable)
    bool ResetDisplayEnemyGauges();
    
    UFUNCTION(BlueprintCallable)
    bool ResetDisplayDamageValues();
    
    UFUNCTION(BlueprintCallable)
    bool ResetDisplayAchievementNotifications();
    
    UFUNCTION(BlueprintCallable)
    float ResetControllerVibration();
    
    UFUNCTION(BlueprintCallable)
    float ResetCameraShake();
    
    UFUNCTION(BlueprintCallable)
    bool ResetCameraOscillation();
    
    UFUNCTION(BlueprintCallable)
    bool ResetAutoSkipAlreadySeenEvents();
    
    UFUNCTION(BlueprintCallable)
    EAutoClimbDirectionMode ResetAutoClimbDirectionMode();
    
    UFUNCTION(BlueprintCallable)
    void ResetAspectRatio();
    
    UFUNCTION(BlueprintCallable)
    void ResetAntiAliasingMethod();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialSettingsDone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EConstraintCameraAspectRatio GetUIAspectRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameEndingType GetTitleType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStickDeadZone(const EInputStick& InputStick) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResolutionScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMinResolutionScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxResolutionScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLowHPFeedbackOpacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLanguage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHoldDownToDodgeStill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGammaPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGammaMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGammaMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGammaDefault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamma() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplayTutorials() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplayPlayerUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplayHPAboveGauge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplayHealValues() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplayEnemyGauges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplayDamageValues() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplayAchievementNotifications() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControllerVibration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetConstraintHUDAspectRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EConstraintCameraAspectRatio GetConstraintCameraAspectRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraShake() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCameraOscillation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoUploadCrashReport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoSkipAlreadySeenEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAutoClimbDirectionMode GetAutoClimbDirectionMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EAntiAliasingMethod> GetAntiAliasingMethod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DidReachGameEnding(EGameEndingType GameEndingType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DidReachAnyGameEnding() const;
    
};

