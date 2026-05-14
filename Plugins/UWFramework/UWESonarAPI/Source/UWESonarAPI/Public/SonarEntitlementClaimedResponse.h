#pragma once
#include "CoreMinimal.h"
#include "SonarEntitlementClaimedResponse.generated.h"

USTRUCT(BlueprintType)
struct FSonarEntitlementClaimedResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString BenefitId;
    
    UPROPERTY(BlueprintReadOnly)
    FString EntitlementStatus;
    
    UPROPERTY(BlueprintReadOnly)
    FString EntitlementSource;
    
    UWESONARAPI_API FSonarEntitlementClaimedResponse();
};

