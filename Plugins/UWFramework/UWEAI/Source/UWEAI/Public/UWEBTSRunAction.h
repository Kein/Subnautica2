#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "UWEBTSRunAction.generated.h"

class UUWEBaseGameplayEventData;

UCLASS(BlueprintType)
class UWEAI_API UUWEBTSRunAction : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEBaseGameplayEventData* ActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableTick;
    
    UUWEBTSRunAction();

};

