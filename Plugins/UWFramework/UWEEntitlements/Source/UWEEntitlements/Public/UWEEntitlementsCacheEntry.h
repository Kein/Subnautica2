#pragma once
#include "CoreMinimal.h"
#include "UWEEntitlementsCacheEntry.generated.h"

USTRUCT(BlueprintType)
struct FUWEEntitlementsCacheEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FString> EntitlementIds;
    
    UWEENTITLEMENTS_API FUWEEntitlementsCacheEntry();
};

