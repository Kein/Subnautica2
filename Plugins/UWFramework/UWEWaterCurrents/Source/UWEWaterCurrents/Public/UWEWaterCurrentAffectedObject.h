#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWEWaterCurrentAffectedObject.generated.h"

class AUWEOverlapWaterCurrent;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UWEWATERCURRENTS_API UUWEWaterCurrentAffectedObject : public UInterface {
    GENERATED_BODY()
};

class UWEWATERCURRENTS_API IUWEWaterCurrentAffectedObject : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual TArray<AUWEOverlapWaterCurrent*> GetEnteredWaterCurrents() PURE_VIRTUAL(GetEnteredWaterCurrents, return TArray<AUWEOverlapWaterCurrent*>(););
    
};

