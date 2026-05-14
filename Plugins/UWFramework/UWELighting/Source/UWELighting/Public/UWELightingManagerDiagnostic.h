#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWELightingManagerDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWELIGHTING_API UUWELightingManagerDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWELightingManagerDiagnostic(const FObjectInitializer& ObjectInitializer);

};

