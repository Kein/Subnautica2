#pragma once
#include "CoreMinimal.h"
#include "SN2SubmarineStation.h"
#include "SN2SubmarineDrainage.generated.h"

class USN2EMTTorsionPointComponent;
class UStaticMeshComponent;

UCLASS()
class SUBNAUTICA2_API ASN2SubmarineDrainage : public ASN2SubmarineStation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USN2EMTTorsionPointComponent* EmtTorsionPointComponent;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* Mesh;
    
public:
    ASN2SubmarineDrainage(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnApplyTorsion(float Torsion, float DeltaTime);
    
};

