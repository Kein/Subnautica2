#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "SN2TargetBasedInputDecelerate.generated.h"

UCLASS(CollapseCategories, EditInlineNew, Config=Engine)
class SUBNAUTICA2_API USN2TargetBasedInputDecelerate : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditInstanceOnly)
    float DecelerationRate;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float MinMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float MaxDistance;
    
    USN2TargetBasedInputDecelerate();

};

