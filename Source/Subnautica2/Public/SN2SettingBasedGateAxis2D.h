#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "SN2SettingBasedGateAxis2D.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SUBNAUTICA2_API USN2SettingBasedGateAxis2D : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SwapSettingName;
    
    UPROPERTY(EditAnywhere)
    bool bEnableWhenSwapped;
    
    USN2SettingBasedGateAxis2D();

};

