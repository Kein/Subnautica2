#pragma once
#include "CoreMinimal.h"
#include "UWEAISettings.h"
#include "UWEAccessibilitySettings.h"
#include "UWEBiomodSettings.h"
#include "UWECraftingSettings.h"
#include "UWEPowerConfigSettings.h"
#include "UWEScanningSettings.h"
#include "UWEStorySettings.h"
#include "UWESurvivalSettings.h"
#include "UWEToolSettings.h"
#include "UWEUISettings.h"
#include "UWEUpgradeSettings.h"
#include "UWEWorldSettings.h"
#include "UWEGameConfigSettings.generated.h"

USTRUCT(BlueprintType)
struct FUWEGameConfigSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAccessibilitySettings AccessibilitySettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEAISettings AISettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEBiomodSettings BiomodSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWECraftingSettings CraftingSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEPowerConfigSettings PowerConfigSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEScanningSettings ScanningSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEStorySettings StorySettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWESurvivalSettings SurvivalSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEToolSettings ToolSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEUISettings UISettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEUpgradeSettings UpgradeSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEWorldSettings WorldSettings;
    
    UWEGAMECONFIGURATION_API FUWEGameConfigSettings();
};

