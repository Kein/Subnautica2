#pragma once
#include "CoreMinimal.h"
#include "SN2AttributeViewModel.h"
#include "SN2PlayerTemperatureViewModel.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2PlayerTemperatureViewModel : public USN2AttributeViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool IsLowHeatWarningTriggered;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsMidHeatWarningTriggered;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsHighHeatWarningTriggered;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsInHeatDanger;
    
    UPROPERTY(BlueprintReadOnly)
    float LowHeatThreshold;
    
    UPROPERTY(BlueprintReadOnly)
    float MediumHeatThreshold;
    
    UPROPERTY(BlueprintReadOnly)
    float HighHeatThreshold;
    
    UPROPERTY(BlueprintReadOnly)
    float LowColdThreshold;
    
    UPROPERTY(BlueprintReadOnly)
    float MediumColdThreshold;
    
    UPROPERTY(BlueprintReadOnly)
    float HighColdThreshold;
    
    USN2PlayerTemperatureViewModel();

};

