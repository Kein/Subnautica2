#pragma once
#include "CoreMinimal.h"
#include "GPPEntitlementInfo_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPEntitlementInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ID;
    
    UPROPERTY()
    FString Sku;
    
    UPROPERTY()
    FString Source;
    
    UPROPERTY()
    FString provider;
    
    UPROPERTY()
    FString GameServerId;
    
    UPROPERTY()
    int64 GrantedAt;
    
    FGPPEntitlementInfo_NoNameEncryption();
};

