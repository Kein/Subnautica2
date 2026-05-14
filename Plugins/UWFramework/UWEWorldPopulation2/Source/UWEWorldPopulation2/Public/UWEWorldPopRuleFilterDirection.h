#pragma once
#include "CoreMinimal.h"
#include "EUWEWorldPopDirection.h"
#include "UWEWorldPopRuleFilterPoints.h"
#include "UWEWorldPopRuleFilterDirection.generated.h"

UCLASS(EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopRuleFilterDirection : public UUWEWorldPopRuleFilterPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<EUWEWorldPopDirection> AcceptableDirections;
    
    UUWEWorldPopRuleFilterDirection();

};

