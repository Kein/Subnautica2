#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DamageSource.generated.h"

USTRUCT()
struct FDamageSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString InstigatorName;
    
    UPROPERTY()
    FGameplayTag DamageType;
    
    UWEGAMEPLAY_API FDamageSource();
};

