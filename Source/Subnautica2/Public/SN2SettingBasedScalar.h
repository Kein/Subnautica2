#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputModifiers.h"
#include "SN2SettingBasedScalar.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class USN2SettingBasedScalar : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FName XAxisScalarSettingName;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FName YAxisScalarSettingName;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FName ZAxisScalarSettingName;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FVector MaxValueClamp;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FVector MinValueClamp;
    
    USN2SettingBasedScalar();

};

