#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "UWEBTDStuckCheck.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTDStuckCheck : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceThreshold;
    
public:
    UUWEBTDStuckCheck();

};

