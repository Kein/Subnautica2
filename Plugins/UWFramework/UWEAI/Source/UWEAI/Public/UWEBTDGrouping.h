#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "UWEAIGroupingCheckType.h"
#include "UWEBTDGrouping.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTDGrouping : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWEAIGroupingCheckType GroupingCheckType;
    
    UUWEBTDGrouping();

};

