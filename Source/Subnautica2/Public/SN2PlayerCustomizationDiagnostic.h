#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2PlayerCustomizationDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2PlayerCustomizationDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    USN2PlayerCustomizationDiagnostic(const FObjectInitializer& ObjectInitializer);

};

