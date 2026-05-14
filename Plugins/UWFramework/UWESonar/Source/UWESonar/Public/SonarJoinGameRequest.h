#pragma once
#include "CoreMinimal.h"
#include "SonarJoinGameRequest.generated.h"

USTRUCT()
struct FSonarJoinGameRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 build_number;
    
    UWESONAR_API FSonarJoinGameRequest();
};

