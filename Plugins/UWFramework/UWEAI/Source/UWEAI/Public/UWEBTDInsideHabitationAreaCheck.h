#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "UWEBTDInsideHabitationAreaCheck.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTDInsideHabitationAreaCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CheckCurrentHabitationArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag HabitationAreaTag;
    
    UUWEBTDInsideHabitationAreaCheck();

};

