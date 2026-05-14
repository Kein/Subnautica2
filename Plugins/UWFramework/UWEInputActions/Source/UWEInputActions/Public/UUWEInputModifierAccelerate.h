#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "UUWEInputModifierAccelerate.generated.h"

UCLASS(CollapseCategories, EditInlineNew, Config=Engine)
class UWEINPUTACTIONS_API UUUWEInputModifierAccelerate : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditInstanceOnly)
    float AccelerationRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditInstanceOnly)
    float ResetBelow;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool bClamp;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float MaxMultiplier;
    
    UUUWEInputModifierAccelerate();

};

