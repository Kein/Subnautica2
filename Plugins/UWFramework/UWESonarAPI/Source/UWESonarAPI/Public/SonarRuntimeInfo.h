#pragma once
#include "CoreMinimal.h"
#include "SonarRuntimeInfo.generated.h"

USTRUCT(BlueprintType)
struct FSonarRuntimeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 seconds_since_start;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 seconds_since_game_start;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString map_name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString game_type;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString net_mode;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString lobby_id;
    
    UWESONARAPI_API FSonarRuntimeInfo();
};

