#pragma once
#include "CoreMinimal.h"
#include "ESonarEntitlementSource.h"
#include "ESonarEntitlementStatus.h"
#include "SonarPlayerEntitlement.generated.h"

USTRUCT(BlueprintType)
struct FSonarPlayerEntitlement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString ID;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SonarId;
    
    UPROPERTY(BlueprintReadOnly)
    FString BenefitId;
    
    UPROPERTY(BlueprintReadOnly)
    FString TwitchId;
    
    UPROPERTY(BlueprintReadOnly)
    FString TwitchEntitlementId;
    
    UPROPERTY(BlueprintReadOnly)
    ESonarEntitlementStatus Status;
    
    UPROPERTY(BlueprintReadOnly)
    ESonarEntitlementSource Source;
    
    UWESONARAPI_API FSonarPlayerEntitlement();
};

