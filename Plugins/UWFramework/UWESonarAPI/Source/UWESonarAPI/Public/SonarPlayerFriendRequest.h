#pragma once
#include "CoreMinimal.h"
#include "SonarPlayerFriendRequest.generated.h"

USTRUCT()
struct FSonarPlayerFriendRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Status;
    
    UWESONARAPI_API FSonarPlayerFriendRequest();
};

