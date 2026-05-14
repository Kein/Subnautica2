#pragma once
#include "CoreMinimal.h"
#include "SN2SubmarineStation.h"
#include "SN2SubmarineScanner.generated.h"

class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class SUBNAUTICA2_API ASN2SubmarineScanner : public ASN2SubmarineStation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UStaticMeshComponent* Mesh;
    
public:
    ASN2SubmarineScanner(const FObjectInitializer& ObjectInitializer);

};

