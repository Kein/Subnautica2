#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2SlateDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2SlateDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    USN2SlateDiagnostic(const FObjectInitializer& ObjectInitializer);

};

