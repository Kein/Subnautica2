#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "UWEInputModifierConditionalDecelerate.generated.h"

UCLASS(CollapseCategories, EditInlineNew, Config=Engine)
class UWEINPUTACTIONS_API UUWEInputModifierConditionalDecelerate : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditInstanceOnly)
    float DecelerationRate;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float MinMultiplier;
    
    UUWEInputModifierConditionalDecelerate();

};

