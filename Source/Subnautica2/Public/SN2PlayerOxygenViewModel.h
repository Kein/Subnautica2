#pragma once
#include "CoreMinimal.h"
#include "SN2AttributeViewModel.h"
#include "SN2PlayerOxygenViewModel.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2PlayerOxygenViewModel : public USN2AttributeViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxValueThresholdToShowLowWarning;
    
    UPROPERTY(BlueprintReadOnly)
    bool bBelowNominalDepth;
    
    USN2PlayerOxygenViewModel();

};

