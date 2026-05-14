#pragma once
#include "CoreMinimal.h"
#include "UWEPowerGeneratorSimulation.h"
#include "SN2SolarPanelSimulation.generated.h"

class UCurveFloat;

UCLASS()
class SUBNAUTICA2_API USN2SolarPanelSimulation : public UUWEPowerGeneratorSimulation {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* DepthPowerCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* TimeOfDayPowerCurve;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool bIsBlocked;
    
    USN2SolarPanelSimulation();

    UFUNCTION(BlueprintCallable)
    void SetIsBlocked(bool bInBlocked);
    
};

