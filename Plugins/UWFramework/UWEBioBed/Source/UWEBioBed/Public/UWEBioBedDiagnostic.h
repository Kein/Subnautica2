#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEBioBedDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEBIOBED_API UUWEBioBedDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEBioBedDiagnostic(const FObjectInitializer& ObjectInitializer);

};

