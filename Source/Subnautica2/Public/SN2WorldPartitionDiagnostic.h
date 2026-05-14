#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2WorldPartitionDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2WorldPartitionDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    USN2WorldPartitionDiagnostic(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void CaptureData();
    
};

