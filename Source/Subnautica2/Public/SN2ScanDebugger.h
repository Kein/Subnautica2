#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2ScanDebugger.generated.h"

class UUWEScanData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2ScanDebugger : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    USN2ScanDebugger(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void IncrementScanProgress(UUWEScanData* ScanData, int32 Amount);
    
};

