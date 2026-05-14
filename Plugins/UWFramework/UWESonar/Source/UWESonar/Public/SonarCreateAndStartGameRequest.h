#pragma once
#include "CoreMinimal.h"
#include "SonarCreateAndStartGameRequest.generated.h"

USTRUCT()
struct FSonarCreateAndStartGameRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString alias;
    
    UPROPERTY()
    int32 location_id;
    
    UPROPERTY()
    FString location_name;
    
    UPROPERTY()
    int32 build_number;
    
    UWESONAR_API FSonarCreateAndStartGameRequest();
};

