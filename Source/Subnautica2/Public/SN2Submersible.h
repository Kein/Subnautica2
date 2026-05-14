#pragma once
#include "CoreMinimal.h"
#include "SN2AngularMotion.h"
#include "SN2PossessableVehicle.h"
#include "SN2Submersible.generated.h"

UCLASS()
class SUBNAUTICA2_API ASN2Submersible : public ASN2PossessableVehicle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FSN2AngularMotion AngularMotion;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AngularAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AngularDrag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RollCorrectionRate;
    
public:
    ASN2Submersible(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ResetControllerRotation();
    
};

