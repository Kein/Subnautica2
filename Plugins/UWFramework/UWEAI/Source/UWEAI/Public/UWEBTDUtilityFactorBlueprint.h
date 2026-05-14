#pragma once
#include "CoreMinimal.h"
#include "UWEBTDUtilityFactorBase.h"
#include "UWEBTDUtilityFactorBlueprint.generated.h"

class AAIController;
class APawn;

UCLASS(Abstract, Blueprintable)
class UWEAI_API UUWEBTDUtilityFactorBlueprint : public UUWEBTDUtilityFactorBase {
    GENERATED_BODY()
public:
    UUWEBTDUtilityFactorBlueprint();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    float CalculateUtilityBP(AAIController* OwnerController, APawn* ControlledPawn);
    
};

