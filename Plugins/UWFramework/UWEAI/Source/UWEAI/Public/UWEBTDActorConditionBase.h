#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "UObject/NoExportTypes.h"
#include "UWEBTDActorConditionBase.generated.h"

UCLASS(Abstract, BlueprintType)
class UWEAI_API UUWEBTDActorConditionBase : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatRange DistanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ResultIfActorIsNull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CheckVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TrackChange;
    
    UUWEBTDActorConditionBase();

};

