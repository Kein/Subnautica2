#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "UWEBTDDespawnOnFailure.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTDDespawnOnFailure : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxCount;
    
public:
    UUWEBTDDespawnOnFailure();

};

