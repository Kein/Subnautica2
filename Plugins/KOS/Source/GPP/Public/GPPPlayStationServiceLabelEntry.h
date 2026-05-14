#pragma once
#include "CoreMinimal.h"
#include "GPPPlayStationServiceLabelEntry.generated.h"

USTRUCT()
struct GPP_API FGPPPlayStationServiceLabelEntry {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FString ContentId;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<int32> ServiceLabels;
    
    FGPPPlayStationServiceLabelEntry();
};

