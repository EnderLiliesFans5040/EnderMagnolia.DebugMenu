#pragma once
#include "CoreMinimal.h"
#include "UserWidgetZion.h"
#include "UserWidgetPlayerUI.generated.h"

class APawn;
class APlayerController;
class UUserWidgetFieldTalkHolder;
class UUserWidgetMinimap;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetPlayerUI : public UUserWidgetZion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidgetFieldTalkHolder* WBP_FieldTalkHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidgetMinimap* WBP_Minimap;
    
public:
    UUserWidgetPlayerUI();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerAnimation_HealFailure_NoHeal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerAnimation_HealFailure_FullHP();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowUI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshSPVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RefreshMinimap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshHealVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RefreshCustomMarkers() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshPlayerUIVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshLowHPFeedbackOpacity(float Opacity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerInputUnlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerInputLocked();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLowHPFeedbackOpacityChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnDisplayPlayerUIChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideUI(bool bInstant);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPawn() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidgetMinimap* GetMinimapWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidgetFieldTalkHolder* GetFieldTalkHolder() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowSP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowHeal() const;
    
};

