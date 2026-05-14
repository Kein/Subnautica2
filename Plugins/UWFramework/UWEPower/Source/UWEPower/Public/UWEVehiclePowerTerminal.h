#pragma once
#include "CoreMinimal.h"
#include "UWEPowerTerminal.h"
#include "UWEVehiclePowerTerminal.generated.h"

class AActor;

UCLASS()
class UWEPOWER_API AUWEVehiclePowerTerminal : public AUWEPowerTerminal {
    GENERATED_BODY()
public:
    AUWEVehiclePowerTerminal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UndockVehicle();
    
    UFUNCTION(BlueprintCallable)
    void DockVehicle(AActor* InVehicle);
    
};

