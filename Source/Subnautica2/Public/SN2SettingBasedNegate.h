#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "SN2SettingBasedNegate.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SUBNAUTICA2_API USN2SettingBasedNegate : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FName XAxisNegateSettingName;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FName YAxisNegateSettingName;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FName ZAxisNegateSettingName;
    
    USN2SettingBasedNegate();

};

