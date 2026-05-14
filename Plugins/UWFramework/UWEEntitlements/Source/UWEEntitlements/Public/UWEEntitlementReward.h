#pragma once
#include "CoreMinimal.h"
#include "UWEEntitlementID.h"
#include "UWEEntitlementReward.generated.h"

USTRUCT(BlueprintType)
struct FUWEEntitlementReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FUWEEntitlementID> EntitlementIds;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FText> RewardNames;
    
    UWEENTITLEMENTS_API FUWEEntitlementReward();
};

