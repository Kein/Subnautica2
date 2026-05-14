#pragma once
#include "CoreMinimal.h"
#include "UWEMusicVolumeEntry.generated.h"

class UFMODEvent;
class UUWEStoryGoal;

USTRUCT(BlueprintType)
struct FUWEMusicVolumeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UFMODEvent> Event;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float duration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Weight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UUWEStoryGoal*> RequiredStoryGoals;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UUWEStoryGoal*> BlockingStoryGoals;
    
    UWEMUSICVOLUMEMANAGER_API FUWEMusicVolumeEntry();
};

