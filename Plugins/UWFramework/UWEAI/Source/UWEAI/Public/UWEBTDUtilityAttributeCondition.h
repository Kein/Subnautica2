#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "UObject/NoExportTypes.h"
#include "UWEAIUtilityFactorAttributeType.h"
#include "UWEBTDUtilityAttributeCondition.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTDUtilityAttributeCondition : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWEAIUtilityFactorAttributeType UtilityAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatRange Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TrackChange;
    
    UUWEBTDUtilityAttributeCondition();

};

