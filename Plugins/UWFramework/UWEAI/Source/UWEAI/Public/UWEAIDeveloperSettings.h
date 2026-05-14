#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "UWEAIDeveloperSettings.generated.h"

class UDataTable;
class UGameplayEffect;
class UUWEAIMovementComponentGlobalSettings;

UCLASS(DefaultConfig, Config=Game)
class UWEAI_API UUWEAIDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> MaxSwimSpeedGameplayEffect_SetByCaller;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEAIMovementComponentGlobalSettings> AIMovementComponentGlobalSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTag DefaultMovementStyle;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTag NeutralTag;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> Profiles;
    
    UUWEAIDeveloperSettings();

};

