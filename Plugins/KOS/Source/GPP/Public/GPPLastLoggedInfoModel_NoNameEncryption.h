#pragma once
#include "CoreMinimal.h"
#include "EGPPlatformLoginType.h"
#include "GPPLastLoggedInfoModel_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct GPP_API FGPPLastLoggedInfoModel_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    EGPPlatformLoginType PlatformLoginType;
    
    UPROPERTY()
    FString UserId;
    
    UPROPERTY()
    FString RefreshToken;
    
    UPROPERTY()
    int64 ExpiredRefreshTokenUnixTime;
    
    UPROPERTY()
    int64 SaveTimestamp;
    
    UPROPERTY()
    FString PlatformUserId;
    
    FGPPLastLoggedInfoModel_NoNameEncryption();
};

