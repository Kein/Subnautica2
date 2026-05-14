#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEEventRecorderDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEANALYTICS_API UUWEEventRecorderDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEEventRecorderDiagnostic(const FObjectInitializer& ObjectInitializer);

};

