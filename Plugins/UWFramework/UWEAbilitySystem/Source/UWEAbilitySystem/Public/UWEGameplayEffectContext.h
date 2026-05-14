#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEffectTypes.h"
#include "UWEGameplayEffectContext.generated.h"

USTRUCT()
struct FUWEGameplayEffectContext : public FGameplayEffectContext {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Transform;
    
    UWEABILITYSYSTEM_API FUWEGameplayEffectContext();
};

