#pragma once
#include "CoreMinimal.h"
#include "GPPModelsPlayStationDLCSync_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPModelsPlayStationDLCSync_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 ServiceLabel;
    
    UPROPERTY()
    FString PsnAuthCode;
    
    FGPPModelsPlayStationDLCSync_NoNameEncryption();
};

