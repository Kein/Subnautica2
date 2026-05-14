#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWECollisionImpactGameplayCue.generated.h"

USTRUCT(BlueprintType)
struct FUWECollisionImpactGameplayCue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool ClientOnly;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VelocityChangeThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinTimeInterval;
    
    UWEPHYSICS_API FUWECollisionImpactGameplayCue();
};

