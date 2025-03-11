#include "UMGBPFLibrary.h"

UUMGBPFLibrary::UUMGBPFLibrary() {
}

bool UUMGBPFLibrary::ShouldDisplayExtraUnavailableCharacters(const UObject* WorldContextObject) {
    return false;
}

bool UUMGBPFLibrary::ShouldDisplayCompletionWidget() {
    return false;
}

void UUMGBPFLibrary::SetBrushFromSprite(UImage* Target, UPaperSprite* Sprite, bool bMatchSize) {
}

void UUMGBPFLibrary::SetBrushFromSoftSpriteAsync(UImage* Target, TSoftObjectPtr<UPaperSprite> SoftSprite, bool bMatchSize) {
}

void UUMGBPFLibrary::SetBrushFromSoftSprite(UImage* Target, TSoftObjectPtr<UPaperSprite> SoftSprite, bool bMatchSize) {
}

void UUMGBPFLibrary::ResetAllNiagaraWidgets() {
}

bool UUMGBPFLibrary::IsUIContextKey(const UObject* WorldContextObject, const FKey& Key) {
    return false;
}

bool UUMGBPFLibrary::IsUIContextAltKey(const UObject* WorldContextObject, const FKey& Key) {
    return false;
}

bool UUMGBPFLibrary::IsUIConfirmKey(const UObject* WorldContextObject, const FKey& Key) {
    return false;
}

bool UUMGBPFLibrary::IsUICancelKey(const UObject* WorldContextObject, const FKey& Key) {
    return false;
}

bool UUMGBPFLibrary::IsRepeatKeyEvent(const FKeyEvent& KeyEvent) {
    return false;
}

bool UUMGBPFLibrary::IsKeyUIInputType(const UObject* WorldContextObject, const FKey& Key, EUIInputType UIInputType) {
    return false;
}

bool UUMGBPFLibrary::IsActionInputTypeKey(const UObject* WorldContextObject, const FKey& Key, const EActionInputType& ActionInputType) {
    return false;
}

void UUMGBPFLibrary::InvalidateAllWidgets() {
}

int32 UUMGBPFLibrary::GetUMGZOrder(EUMGLayer UMGLayer) {
    return 0;
}

EFocusCause UUMGBPFLibrary::GetFocusCause(FFocusEvent FocusEvent) {
    return EFocusCause::Mouse;
}

int32 UUMGBPFLibrary::GetCompletionPercentageForItemType(const UObject* WorldContextObject, const EInventoryItemType& ItemType) {
    return 0;
}

void UUMGBPFLibrary::AddToViewportAtLayer(UUserWidget* Widget, EUMGLayer UMGLayer) {
}


