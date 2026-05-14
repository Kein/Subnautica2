#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWESimpleShape.h"
#include "SensorConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FSensorConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FUWESimpleShape Shape;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer StimulusTypeTags;
    
    UWESTIMULUSSYSTEM_API FSensorConfiguration();
};

