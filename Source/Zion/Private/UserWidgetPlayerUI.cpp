#include "UserWidgetPlayerUI.h"

UUserWidgetPlayerUI::UUserWidgetPlayerUI() {
    this->WBP_FieldTalkHolder = NULL;
    this->WBP_Minimap = NULL;
}



void UUserWidgetPlayerUI::ShowUI_Implementation() {
}

void UUserWidgetPlayerUI::RefreshSPVisibility_Implementation() {
}

void UUserWidgetPlayerUI::RefreshMinimap() const {
}

void UUserWidgetPlayerUI::RefreshHealVisibility_Implementation() {
}

void UUserWidgetPlayerUI::RefreshCustomMarkers() const {
}





void UUserWidgetPlayerUI::OnLowHPFeedbackOpacityChanged() {
}

void UUserWidgetPlayerUI::OnDisplayPlayerUIChanged() {
}

void UUserWidgetPlayerUI::HideUI_Implementation(bool bInstant) {
}

APawn* UUserWidgetPlayerUI::GetPawn() const {
    return NULL;
}

UUserWidgetMinimap* UUserWidgetPlayerUI::GetMinimapWidget() const {
    return NULL;
}

UUserWidgetFieldTalkHolder* UUserWidgetPlayerUI::GetFieldTalkHolder() const {
    return NULL;
}

APlayerController* UUserWidgetPlayerUI::GetController() const {
    return NULL;
}

bool UUserWidgetPlayerUI::CanShowSP() const {
    return false;
}

bool UUserWidgetPlayerUI::CanShowHeal() const {
    return false;
}


