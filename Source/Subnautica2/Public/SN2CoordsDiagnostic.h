#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2CoordsDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2CoordsDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    USN2CoordsDiagnostic(const FObjectInitializer& ObjectInitializer);

};

