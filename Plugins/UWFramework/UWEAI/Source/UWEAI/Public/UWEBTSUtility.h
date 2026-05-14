#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "UWEBTSUtility.generated.h"

UCLASS()
class UWEAI_API UUWEBTSUtility : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bDoAsync;
    
    UUWEBTSUtility();

};

