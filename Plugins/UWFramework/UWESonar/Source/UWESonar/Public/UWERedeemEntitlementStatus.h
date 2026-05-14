#pragma once
#include "CoreMinimal.h"
#include "UWERedeemEntitlementStatus.generated.h"

USTRUCT(BlueprintType)
struct FUWERedeemEntitlementStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bSuccess;
    
    UPROPERTY(BlueprintReadOnly)
    FString ErrorCode;
    
    UPROPERTY(BlueprintReadOnly)
    FText ErrorMessage;
    
    UWESONAR_API FUWERedeemEntitlementStatus();
};

