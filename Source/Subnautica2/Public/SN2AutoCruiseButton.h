#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "SN2SubmarineStation.h"
#include "SN2AutoCruiseButton.generated.h"

class UStaticMeshComponent;

UCLASS()
class SUBNAUTICA2_API ASN2AutoCruiseButton : public ASN2SubmarineStation, public IInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* ButtonMesh;
    
public:
    ASN2AutoCruiseButton(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

