#pragma once
#include "CoreMinimal.h"
#include "SonarTwitchEntitlementResponse.generated.h"

USTRUCT(BlueprintType)
struct FSonarTwitchEntitlementResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 Count;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> EntitlementIds;
    
    UWESONARAPI_API FSonarTwitchEntitlementResponse();
};

