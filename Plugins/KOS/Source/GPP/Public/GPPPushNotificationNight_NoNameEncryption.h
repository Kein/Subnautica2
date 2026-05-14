#pragma once
#include "CoreMinimal.h"
#include "GPPPushNotificationNight_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPPushNotificationNight_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool PushNightEnable;
    
    GPP_API FGPPPushNotificationNight_NoNameEncryption();
};

