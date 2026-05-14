#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPopRuleGather.h"
#include "UWEWorldPopRuleGatherOtherResource.generated.h"

class AUWEWorldPopResourceBaseActor;

UCLASS(EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopRuleGatherOtherResource : public UUWEWorldPopRuleGather {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftClassPtr<AUWEWorldPopResourceBaseActor>> ResourceClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDistanceToResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDistanceToResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool GetOnlySurface;
    
    UUWEWorldPopRuleGatherOtherResource();

};

