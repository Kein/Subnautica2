#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEDiagnosticsDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEIMGUI_API UUWEDiagnosticsDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEDiagnosticsDiagnostic(const FObjectInitializer& ObjectInitializer);

};

