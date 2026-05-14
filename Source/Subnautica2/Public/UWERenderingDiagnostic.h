#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWERenderingDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API UUWERenderingDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWERenderingDiagnostic(const FObjectInitializer& ObjectInitializer);

};

