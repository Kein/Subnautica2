#pragma once
#include "CoreMinimal.h"
#include "GPPGameServerMaintenanceInfo_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPGameServerMaintenanceInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    bool UnderMaintenance;
    
    FGPPGameServerMaintenanceInfo_NoNameEncryption();
};

