#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ECommandSetCategory.h"
#include "CommandSet.generated.h"

class UCommandSettingsData;

UCLASS(Blueprintable)
class ZION_API UCommandSet : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommandSetCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowAutoReSummon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCommandSettingsData*> CommandSettingsList;
    
public:
    UCommandSet();

};

