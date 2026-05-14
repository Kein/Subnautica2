#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEBTDUtilityFactorBase.h"
#include "UWEBTDUtilityFactorStimulus.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTDUtilityFactorStimulus : public UUWEBTDUtilityFactorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer StimulusTypeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagQuery GameplayTagQuery;
    
    UUWEBTDUtilityFactorStimulus();

};

