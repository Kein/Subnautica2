#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "UWEAIActionComponent.generated.h"

class AAIController;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEAI_API UUWEAIActionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AAIController* AIOwner;
    
public:
    UUWEAIActionComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnGameplayTagRemove(const FGameplayTag InTag, int32 NewCount);
    
};

