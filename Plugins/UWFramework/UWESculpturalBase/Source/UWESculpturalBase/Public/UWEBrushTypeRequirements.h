#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEBrushTypeRequirements.generated.h"

USTRUCT(BlueprintType)
struct FUWEBrushTypeRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGameplayTagContainer RequiredBrushTypes;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGameplayTagContainer ProhibitedBrushTypes;
    
    UWESCULPTURALBASE_API FUWEBrushTypeRequirements();
};

