#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "SN2SubmarineHatch.generated.h"

class ASN2Submarine;

UCLASS()
class SUBNAUTICA2_API ASN2SubmarineHatch : public AActor, public IInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    ASN2Submarine* Submarine;
    
public:
    ASN2SubmarineHatch(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

