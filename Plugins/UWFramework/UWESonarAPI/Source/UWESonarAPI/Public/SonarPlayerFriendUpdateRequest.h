#pragma once
#include "CoreMinimal.h"
#include "SonarPlayerFriendUpdateRequest.generated.h"

USTRUCT()
struct FSonarPlayerFriendUpdateRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Status;
    
    UWESONARAPI_API FSonarPlayerFriendUpdateRequest();
};

