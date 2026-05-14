#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "GameplayTagContainer.h"
#include "EUWEAIRemoveActiveEffectsType.h"
#include "UWEAITargetActorSelector.h"
#include "UWEBTSRemoveActiveEffects.generated.h"

UCLASS()
class UWEAI_API UUWEBTSRemoveActiveEffects : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EUWEAIRemoveActiveEffectsType RemoveType;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer Tags;
    
    UPROPERTY(EditAnywhere)
    FUWEAITargetActorSelector TargetSelector;
    
    UUWEBTSRemoveActiveEffects();

};

