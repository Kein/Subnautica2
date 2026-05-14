#pragma once
#include "CoreMinimal.h"
#include "MercunaMovementAdapter.h"
#include "MerChaosVehicleAdapter.generated.h"

class UChaosWheeledVehicleMovementComponent;

UCLASS(CollapseCategories, EditInlineNew)
class UMerChaosVehicleAdapter : public UMercunaMovementAdapter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UChaosWheeledVehicleMovementComponent* VehicleMovementComponent;
    
public:
    UMerChaosVehicleAdapter();

};

