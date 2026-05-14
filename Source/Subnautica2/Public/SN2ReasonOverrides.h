#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SN2ReasonOverrides.generated.h"

USTRUCT(BlueprintType)
struct FSN2ReasonOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, FGameplayTag> Map;
    
    SUBNAUTICA2_API FSN2ReasonOverrides();
};

