#pragma once
#include "CoreMinimal.h"
#include "SonarSystemInfo.h"
#include "SonarAuthRequest.generated.h"

USTRUCT(BlueprintType)
struct FSonarAuthRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString UserName;
    
    UPROPERTY()
    FString Password;
    
    UPROPERTY()
    FString provider;
    
    UPROPERTY()
    FString client_id;
    
    UPROPERTY()
    FString net_id;
    
    UPROPERTY()
    FString client_secret;
    
    UPROPERTY()
    int32 build_number;
    
    UPROPERTY()
    FSonarSystemInfo system_info;
    
    UWESONARAPI_API FSonarAuthRequest();
};

