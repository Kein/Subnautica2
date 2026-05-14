#pragma once
#include "CoreMinimal.h"
#include "SonarLocation.generated.h"

USTRUCT(BlueprintType)
struct FSonarLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 location_id;
    
    UPROPERTY(BlueprintReadOnly)
    FString location_name;
    
    UWESONAR_API FSonarLocation();
};

