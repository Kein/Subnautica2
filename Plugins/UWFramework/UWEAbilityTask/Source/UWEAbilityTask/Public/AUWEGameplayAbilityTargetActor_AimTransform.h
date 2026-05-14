#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "UWEAimTransform.h"
#include "AUWEGameplayAbilityTargetActor_AimTransform.generated.h"

UCLASS()
class UWEABILITYTASK_API AAUWEGameplayAbilityTargetActor_AimTransform : public AGameplayAbilityTargetActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEAimTransform CachedAimTransform;
    
    AAUWEGameplayAbilityTargetActor_AimTransform(const FObjectInitializer& ObjectInitializer);

};

