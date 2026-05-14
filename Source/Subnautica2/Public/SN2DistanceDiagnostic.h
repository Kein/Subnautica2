#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2DistanceDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2DistanceDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    USN2DistanceDiagnostic(const FObjectInitializer& ObjectInitializer);

};

