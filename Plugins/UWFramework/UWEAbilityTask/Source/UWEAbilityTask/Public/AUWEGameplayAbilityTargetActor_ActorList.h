#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "AUWEGameplayAbilityTargetActor_ActorList.generated.h"

class AActor;

UCLASS()
class UWEABILITYTASK_API AAUWEGameplayAbilityTargetActor_ActorList : public AGameplayAbilityTargetActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> CachedActors;
    
    AAUWEGameplayAbilityTargetActor_ActorList(const FObjectInitializer& ObjectInitializer);

};

