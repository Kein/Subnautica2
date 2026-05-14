#pragma once
#include "CoreMinimal.h"
#include "GPPPushNotification_NoNameEncryption.generated.h"

USTRUCT()
struct FGPPPushNotification_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool PushEnable;
    
    GPP_API FGPPPushNotification_NoNameEncryption();
};

