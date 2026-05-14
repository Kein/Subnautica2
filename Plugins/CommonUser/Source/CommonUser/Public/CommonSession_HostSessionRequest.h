#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ECommonSessionOnlineMode.h"
#include "CommonSession_HostSessionRequest.generated.h"

UCLASS(BlueprintType)
class COMMONUSER_API UCommonSession_HostSessionRequest : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    ECommonSessionOnlineMode OnlineMode;
    
    UPROPERTY(BlueprintReadWrite)
    bool bUseLobbies;
    
    UPROPERTY(BlueprintReadWrite)
    bool bUseLobbiesVoiceChat;
    
    UPROPERTY(BlueprintReadWrite)
    bool bUsePresence;
    
    UPROPERTY(BlueprintReadWrite)
    FString ModeNameForAdvertisement;
    
    UPROPERTY(BlueprintReadWrite)
    FPrimaryAssetId MapID;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FString, FString> ExtraArgs;
    
    UPROPERTY(BlueprintReadWrite)
    int32 MaxPlayerCount;
    
    UCommonSession_HostSessionRequest();

};

