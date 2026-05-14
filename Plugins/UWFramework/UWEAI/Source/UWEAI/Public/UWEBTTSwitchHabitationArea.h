#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "UWEBTTSwitchHabitationArea.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTTSwitchHabitationArea : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag HabitationAreaTag;
    
public:
    UUWEBTTSwitchHabitationArea();

};

