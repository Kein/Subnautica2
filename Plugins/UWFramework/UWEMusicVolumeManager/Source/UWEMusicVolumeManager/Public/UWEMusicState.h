#pragma once
#include "CoreMinimal.h"
#include "UWEMusicState.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct FUWEMusicState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TSoftObjectPtr<UFMODEvent> Event;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float duration;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    bool Loop;
    
    UWEMUSICVOLUMEMANAGER_API FUWEMusicState();
};

