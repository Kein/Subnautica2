#pragma once
#include "CoreMinimal.h"
#include "EGPPEntitlementType.h"
#include "GPPEntitlementItem.generated.h"

USTRUCT(BlueprintType)
struct GPP_API FGPPEntitlementItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString ID;
    
    UPROPERTY(BlueprintReadOnly)
    FString Sku;
    
    UPROPERTY(BlueprintReadOnly)
    FString Source;
    
    UPROPERTY(BlueprintReadOnly)
    FString provider;
    
    UPROPERTY(BlueprintReadOnly)
    FString GameServerId;
    
    UPROPERTY(BlueprintReadOnly)
    int64 GrantedAt;
    
    UPROPERTY(BlueprintReadOnly)
    EGPPEntitlementType Type;
    
    FGPPEntitlementItem();
};

