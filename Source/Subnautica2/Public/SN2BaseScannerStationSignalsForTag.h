#pragma once
#include "CoreMinimal.h"
#include "SN2BaseScannerStationSignalsForTag.generated.h"

class USN2BaseScannerStationSignalComponent;

USTRUCT(BlueprintType)
struct SUBNAUTICA2_API FSN2BaseScannerStationSignalsForTag {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TSet<TWeakObjectPtr<USN2BaseScannerStationSignalComponent>> Signals;
    
    FSN2BaseScannerStationSignalsForTag();
};

