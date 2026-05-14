#pragma once
#include "CoreMinimal.h"
#include "UWECachedActorHiddenState.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct UWEUTILITIES_API FUWECachedActorHiddenState {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY()
    TMap<int32, bool> ComponentVisibilityMap;
    
    FUWECachedActorHiddenState();
};

