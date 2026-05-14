#pragma once
#include "CoreMinimal.h"
#include "SonarSystemInfo.generated.h"

USTRUCT(BlueprintType)
struct FSonarSystemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString computer_name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString computer_username;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString os_id;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString os_version;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 run_number;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString install_guid;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString app_id;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 client_flags;
    
    UWESONARAPI_API FSonarSystemInfo();
};

