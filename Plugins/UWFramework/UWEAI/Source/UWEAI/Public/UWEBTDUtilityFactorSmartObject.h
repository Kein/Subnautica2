#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEBTDUtilityFactorBase.h"
#include "UWEBTDUtilityFactorSmartObject.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTDUtilityFactorSmartObject : public UUWEBTDUtilityFactorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Activity;
    
    UUWEBTDUtilityFactorSmartObject();

};

