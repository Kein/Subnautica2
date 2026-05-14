#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "GameplayTagContainer.h"
#include "UWEBTTGroupingMove.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTTGroupingMove : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag MovementStyle;
    
    UPROPERTY(EditAnywhere)
    float StartForceProportion;
    
    UPROPERTY(EditAnywhere)
    float FinishForceProportion;
    
public:
    UUWEBTTGroupingMove();

};

