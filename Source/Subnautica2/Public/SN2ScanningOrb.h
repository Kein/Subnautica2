#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "SN2ScanningOrb.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2ScanningOrb : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    USN2ScanningOrb(const FObjectInitializer& ObjectInitializer);

};

