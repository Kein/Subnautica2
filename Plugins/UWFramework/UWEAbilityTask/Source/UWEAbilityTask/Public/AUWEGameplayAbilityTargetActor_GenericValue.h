#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "UWEGameplayAbilityTargetData_Generic.h"
#include "AUWEGameplayAbilityTargetActor_GenericValue.generated.h"

UCLASS()
class UWEABILITYTASK_API AAUWEGameplayAbilityTargetActor_GenericValue : public AGameplayAbilityTargetActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEGameplayAbilityTargetData_Generic CachedData;
    
    AAUWEGameplayAbilityTargetActor_GenericValue(const FObjectInitializer& ObjectInitializer);

};

