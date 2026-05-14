#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "UWEBTTRunAction.generated.h"

class AActor;
class UUWEBaseGameplayEventData;

UCLASS(BlueprintType)
class UWEAI_API UUWEBTTRunAction : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEBaseGameplayEventData* ActionData;
    
    UUWEBTTRunAction();

protected:
    UFUNCTION()
    void OnActionFinished(const AActor* Owner, bool bWasSuccess);
    
};

