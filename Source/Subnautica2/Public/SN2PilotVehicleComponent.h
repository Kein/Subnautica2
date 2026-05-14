#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "Interactable.h"
#include "SN2PilotVehicleComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2PilotVehicleComponent : public UCapsuleComponent, public IInteractable {
    GENERATED_BODY()
public:
    USN2PilotVehicleComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

