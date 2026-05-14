#pragma once
#include "CoreMinimal.h"
#include "GPPEntitlementInfo_NoNameEncryption.h"
#include "GPPDurableEntitlement_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPDurableEntitlement_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString NextCursor;
    
    UPROPERTY()
    TArray<FGPPEntitlementInfo_NoNameEncryption> DurableEntitlements;
    
    FGPPDurableEntitlement_NoNameEncryption();
};

