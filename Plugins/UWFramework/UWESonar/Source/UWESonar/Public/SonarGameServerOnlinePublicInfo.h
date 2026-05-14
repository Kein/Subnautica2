#pragma once
#include "CoreMinimal.h"
#include "SonarGameServerOnlinePublicInfo.generated.h"

USTRUCT(BlueprintType)
struct FSonarGameServerOnlinePublicInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int64 seconds_since_start;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString map_name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 num_players;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString alias;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Location;
    
    UWESONAR_API FSonarGameServerOnlinePublicInfo();
};

