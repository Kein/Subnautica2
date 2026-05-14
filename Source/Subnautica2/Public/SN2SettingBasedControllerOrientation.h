#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "SN2SettingBasedControllerOrientation.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SUBNAUTICA2_API USN2SettingBasedControllerOrientation : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FName ControllerOrientationSettingName;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool bIsLeftStick;
    
    USN2SettingBasedControllerOrientation();

};

