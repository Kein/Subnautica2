#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEGlobalSimulationDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEGLOBALSIMULATION_API UUWEGlobalSimulationDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEGlobalSimulationDiagnostic(const FObjectInitializer& ObjectInitializer);

};

