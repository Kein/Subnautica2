#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUWEClassRepNodeMapping.h"
#include "UWERepGraphActorClassSettings.generated.h"

USTRUCT(BlueprintType)
struct FUWERepGraphActorClassSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSoftClassPath ActorClass;
    
    UPROPERTY(EditAnywhere)
    EUWEClassRepNodeMapping ClassNodeMapping;
    
    UPROPERTY(EditAnywhere)
    bool bAddToRPC_Multicast_OpenChannelForClassMap;
    
    UPROPERTY(EditAnywhere)
    bool bRPC_Multicast_OpenChannelForClass;
    
    UWENETWORKING_API FUWERepGraphActorClassSettings();
};

