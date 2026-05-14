#pragma once
#include "CoreMinimal.h"
#include "GPPEntitlementInfo_NoNameEncryption.h"
#include "GPPConsumableEntitlement_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPConsumableEntitlement_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString NextCursor;
    
    UPROPERTY()
    TArray<FGPPEntitlementInfo_NoNameEncryption> ConsumableEntitlements;
    
    FGPPConsumableEntitlement_NoNameEncryption();
};

