#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "UWEDialogueSettings.generated.h"

class UUWEDialogueNode;

UCLASS(DefaultConfig, Config=Game)
class UWEDIALOGUE_API UUWEDialogueSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FGameplayTagContainer RequiredTagsForPlayingDialogue;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTagContainer BlockedTagsForPlayingDialogue;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTagContainer RequiredTagsForPlayingAlerts;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTagContainer BlockedTagsForPlayingAlerts;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEDialogueNode> WaterDepletedAlert;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEDialogueNode> WaterCriticalAlert;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEDialogueNode> WaterLowAlert;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEDialogueNode> FoodDepletedAlert;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEDialogueNode> FoodCriticalAlert;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEDialogueNode> FoodLowAlert;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEDialogueNode> HealthDepletedAlert;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEDialogueNode> HealthCriticalAlert;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEDialogueNode> HealthLowAlert;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEDialogueNode> OxygenDepletedAlert;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEDialogueNode> OxygenCriticalAlert;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEDialogueNode> OxygenLowAlert;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEDialogueNode> LowHeatWarning;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEDialogueNode> MidHeatWarning;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEDialogueNode> HighHeatWarning;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUWEDialogueNode> OxygenConsumptionIncreasedWarning;
    
    UUWEDialogueSettings();

};

