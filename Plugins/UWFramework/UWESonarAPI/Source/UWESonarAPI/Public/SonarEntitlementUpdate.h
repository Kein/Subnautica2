#pragma once
#include "CoreMinimal.h"
#include "SonarEntitlementUpdate.generated.h"

USTRUCT(BlueprintType)
struct FSonarEntitlementUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> benefit_ids;
    
    UWESONARAPI_API FSonarEntitlementUpdate();
};

