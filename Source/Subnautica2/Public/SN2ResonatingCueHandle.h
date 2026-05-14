#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SN2ResonatingCueHandle.generated.h"

class AActor;

USTRUCT()
struct FSN2ResonatingCueHandle {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY()
    FGameplayTag CueTag;
    
    SUBNAUTICA2_API FSN2ResonatingCueHandle();
};

