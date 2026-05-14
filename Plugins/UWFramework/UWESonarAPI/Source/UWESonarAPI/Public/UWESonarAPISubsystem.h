#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UWESonarAPISubsystem.generated.h"

UCLASS(BlueprintType, Config=Game)
class UWESONARAPI_API UUWESonarAPISubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FString UWESonarAPIUrl;
    
    UPROPERTY(Config)
    FString UWEAlternativeEventsUrl;
    
    UPROPERTY(Config)
    bool bDisableGPP;
    
    UPROPERTY(Config)
    FString UWESonarLoginXSTSEndpoint;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    FString BearerToken;
    
public:
    UUWESonarAPISubsystem();

};

