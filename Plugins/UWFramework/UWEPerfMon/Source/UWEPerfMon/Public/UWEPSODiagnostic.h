#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEPSODiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPERFMON_API UUWEPSODiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEPSODiagnostic(const FObjectInitializer& ObjectInitializer);

};

