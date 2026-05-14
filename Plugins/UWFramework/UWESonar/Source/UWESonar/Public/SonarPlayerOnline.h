#pragma once
#include "CoreMinimal.h"
#include "SonarPlayerOnline.generated.h"

USTRUCT(BlueprintType)
struct FSonarPlayerOnline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 build_number;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString created_at;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString last_status_at;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString alias;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Mode;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString connected_to_address;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 connected_to_port;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 connected_to_gameserver_id;
    
    UWESONAR_API FSonarPlayerOnline();
};

