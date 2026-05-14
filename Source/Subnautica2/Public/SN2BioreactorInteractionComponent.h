#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESN2BioreactorPowerConsumptionState.h"
#include "SN2BioreactorInteractionComponent.generated.h"

class ASN2Bioreactor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2BioreactorInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USN2BioreactorInteractionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetState(ASN2Bioreactor* bioreactor, ESN2BioreactorPowerConsumptionState State);
    
private:
    UFUNCTION(Reliable, Server)
    void ServerSetState(ASN2Bioreactor* bioreactor, ESN2BioreactorPowerConsumptionState State);
    
};

