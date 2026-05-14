#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "SN2SubmarineStation.h"
#include "SN2SubmarineControl.generated.h"

UCLASS()
class SUBNAUTICA2_API ASN2SubmarineControl : public ASN2SubmarineStation, public IInteractable {
    GENERATED_BODY()
public:
    ASN2SubmarineControl(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

