#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "EActionInputType.h"
#include "EInventoryItemType.h"
#include "EUIInputType.h"
#include "EUMGLayer.h"
#include "UMGBPFLibrary.generated.h"

class UImage;
class UObject;
class UPaperSprite;
class UUserWidget;

UCLASS(Blueprintable)
class UUMGBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUMGBPFLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ShouldDisplayExtraUnavailableCharacters(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldDisplayCompletionWidget();
    
    UFUNCTION(BlueprintCallable)
    static void SetBrushFromSprite(UImage* Target, UPaperSprite* Sprite, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    static void SetBrushFromSoftSpriteAsync(UImage* Target, TSoftObjectPtr<UPaperSprite> SoftSprite, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    static void SetBrushFromSoftSprite(UImage* Target, TSoftObjectPtr<UPaperSprite> SoftSprite, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAllNiagaraWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUIContextKey(const UObject* WorldContextObject, const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUIContextAltKey(const UObject* WorldContextObject, const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUIConfirmKey(const UObject* WorldContextObject, const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUICancelKey(const UObject* WorldContextObject, const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRepeatKeyEvent(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsKeyUIInputType(const UObject* WorldContextObject, const FKey& Key, EUIInputType UIInputType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsActionInputTypeKey(const UObject* WorldContextObject, const FKey& Key, const EActionInputType& ActionInputType);
    
    UFUNCTION(BlueprintCallable)
    static void InvalidateAllWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUMGZOrder(EUMGLayer UMGLayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFocusCause GetFocusCause(FFocusEvent FocusEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetCompletionPercentageForItemType(const UObject* WorldContextObject, const EInventoryItemType& ItemType);
    
    UFUNCTION(BlueprintCallable)
    static void AddToViewportAtLayer(UUserWidget* Widget, EUMGLayer UMGLayer);
    
};

