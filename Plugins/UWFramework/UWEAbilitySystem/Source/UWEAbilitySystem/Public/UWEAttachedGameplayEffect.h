#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "UWEAttachedGameplayEffect.generated.h"

class UAbilitySystemComponent;

USTRUCT()
struct FUWEAttachedGameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TWeakObjectPtr<UAbilitySystemComponent> TargetASC;
    
    UPROPERTY()
    FActiveGameplayEffectHandle GEHandle;
    
    UPROPERTY()
    int32 Stacks;
    
    UWEABILITYSYSTEM_API FUWEAttachedGameplayEffect();
};

