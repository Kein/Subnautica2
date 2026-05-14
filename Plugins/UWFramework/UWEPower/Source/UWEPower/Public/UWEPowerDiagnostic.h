#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEPowerDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPOWER_API UUWEPowerDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEPowerDiagnostic(const FObjectInitializer& ObjectInitializer);

};

