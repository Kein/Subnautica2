#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWEStimulusInfo.generated.h"

USTRUCT(BlueprintType)
struct FUWEStimulusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag StimulusTypeTag;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly)
    float RemainingTime;
    
    UWESTIMULUSSYSTEM_API FUWEStimulusInfo();
};

