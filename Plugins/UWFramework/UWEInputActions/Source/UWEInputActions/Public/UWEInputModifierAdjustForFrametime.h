#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "UWEInputModifierAdjustForFrametime.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWEINPUTACTIONS_API UUWEInputModifierAdjustForFrametime : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float Multiplier;
    
    UUWEInputModifierAdjustForFrametime();

};

