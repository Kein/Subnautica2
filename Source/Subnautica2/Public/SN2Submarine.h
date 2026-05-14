#pragma once
#include "CoreMinimal.h"
#include "SN2Trident.h"
#include "SN2Submarine.generated.h"

class UUWEHealthSetComponent;

UCLASS()
class SUBNAUTICA2_API ASN2Submarine : public ASN2Trident {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEHealthSetComponent* HealthSetComponent;
    
public:
    ASN2Submarine(const FObjectInitializer& ObjectInitializer);

};

