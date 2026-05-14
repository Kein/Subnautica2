#pragma once
#include "CoreMinimal.h"
#include "EUWEEntitlementOnlinePlatform.h"
#include "UWEEntitlementID.generated.h"

USTRUCT(BlueprintType)
struct FUWEEntitlementID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EUWEEntitlementOnlinePlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString EntitlementID;
    
    UWEENTITLEMENTS_API FUWEEntitlementID();
};

