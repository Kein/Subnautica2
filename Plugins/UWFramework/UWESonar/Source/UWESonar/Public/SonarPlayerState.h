#pragma once
#include "CoreMinimal.h"
#include "SonarPlayerState.generated.h"

USTRUCT(BlueprintType)
struct FSonarPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString SonarPlayerId;
    
    UPROPERTY(BlueprintReadOnly)
    FString SonarPlatformId;
    
    UPROPERTY(BlueprintReadOnly)
    FString SonarProvider;
    
    UWESONAR_API FSonarPlayerState();
};

