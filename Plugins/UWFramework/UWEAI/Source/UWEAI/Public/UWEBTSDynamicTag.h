#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "GameplayTagContainer.h"
#include "UWEAITargetActorSelector.h"
#include "UWEBTSDynamicTag.generated.h"

UCLASS()
class UWEAI_API UUWEBTSDynamicTag : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag Tag;
    
    UPROPERTY(EditAnywhere)
    FUWEAITargetActorSelector TargetSelector;
    
    UUWEBTSDynamicTag();

};

