#pragma once
#include "CoreMinimal.h"
#include "UWEClientSessionInfo.generated.h"

USTRUCT(BlueprintType)
struct FUWEClientSessionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString InstallGUID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString SonarUsername;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString SonarProvider;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString SonarNetId;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 RunNumber;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString SonarPlayerId;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString SessionId;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString SteamBetaName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString SonarEnvironment;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString PlatformUniqueId;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 BuildNumber;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CompatibleBuildNumber;
    
    SUBNAUTICA2_API FUWEClientSessionInfo();
};

