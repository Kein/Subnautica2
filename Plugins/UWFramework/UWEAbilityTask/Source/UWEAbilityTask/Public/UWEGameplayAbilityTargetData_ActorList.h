#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "UWEGameplayAbilityTargetData_ActorList.generated.h"

class AActor;

USTRUCT()
struct UWEABILITYTASK_API FUWEGameplayAbilityTargetData_ActorList : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> Actors;
    
    FUWEGameplayAbilityTargetData_ActorList();
};

