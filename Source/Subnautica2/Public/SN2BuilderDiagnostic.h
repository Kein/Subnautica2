#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2BuilderDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2BuilderDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    USN2BuilderDiagnostic(const FObjectInitializer& ObjectInitializer);

};

