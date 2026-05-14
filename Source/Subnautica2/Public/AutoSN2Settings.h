#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "ConstructSettings.h"
#include "SnappingSettings.h"
#include "Templates/SubclassOf.h"
#include "AutoSN2Settings.generated.h"

class UCommonUserWidget;
class UModalActivatableWidget;
class USN2InputGlyphFallback;
class UUWEGameplayAbility;
class UUserWidget;
class UWorld;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class SUBNAUTICA2_API UAutoSN2Settings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UWorld> DefaultWorldLevel;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSubclassOf<UUserWidget> MainScreenClass;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<UModalActivatableWidget> PDAScreenClass;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<UModalActivatableWidget> RespawnWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<UCommonUserWidget> RythmGameClass;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<UCommonUserWidget> CompilingShadersWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSubclassOf<USN2InputGlyphFallback> InputGlyphFallbackClass;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<UUWEGameplayAbility> ScanAllGameplayAbility;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool StartInGodMode;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FConstructSettings ConstructSettings;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSnappingSettings SnappingSettings;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FFloatRange ControllerSensitivityRange;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FFloatRange ControllerForceFeedbackSensitivityRange;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float DefaultControllerSensitivity;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float ForceFeedbackSensitivity;
    
    UAutoSN2Settings();

};

