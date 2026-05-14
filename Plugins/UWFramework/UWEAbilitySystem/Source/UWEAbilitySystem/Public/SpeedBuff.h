#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayTagContainer.h"
#include "SpeedBuff.generated.h"

USTRUCT()
struct FSpeedBuff {
    GENERATED_BODY()
public:
    UPROPERTY()
    FActiveGameplayEffectHandle Handle;
    
    UPROPERTY()
    FGameplayTag SpeedTag;
    
    UPROPERTY()
    float Speed;
    
    UWEABILITYSYSTEM_API FSpeedBuff();
};

