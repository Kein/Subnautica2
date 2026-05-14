#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWENetworkDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPERFMON_API UUWENetworkDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWENetworkDiagnostic(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void CaptureData();
    
};

