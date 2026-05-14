#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2VideoToursDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2VideoToursDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    USN2VideoToursDiagnostic(const FObjectInitializer& ObjectInitializer);

};

