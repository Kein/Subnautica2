#pragma once
#include "CoreMinimal.h"
#include "SonarRuntimeInfo.h"
#include "SonarPlayerStatusRequest.generated.h"

USTRUCT()
struct FSonarPlayerStatusRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString alias;
    
    UPROPERTY()
    FString Mode;
    
    UPROPERTY()
    FString connected_to_address;
    
    UPROPERTY()
    int32 connected_to_port;
    
    UPROPERTY()
    int32 connected_to_gameserver_id;
    
    UPROPERTY()
    FSonarRuntimeInfo runtime_info;
    
    UWESONARAPI_API FSonarPlayerStatusRequest();
};

