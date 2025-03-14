#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UserWidgetZion.h"
#include "UserWidgetMapTransition.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ZION_API UUserWidgetMapTransition : public UUserWidgetZion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle MapTransitionHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowStartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowEndPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
public:
    UUserWidgetMapTransition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowMapTransition();
    
    UFUNCTION(BlueprintCallable)
    void SetScale(float NewScale);
    
    UFUNCTION(BlueprintCallable)
    void SetIconsVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetScale(float NewScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetIconsVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideMapTransition();
    
};

