#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWETriggeredNotificationOverActorInterface.generated.h"

class APawn;
class UUWETriggeredNotificationData;

UINTERFACE(Blueprintable)
class UUWETriggeredNotificationOverActorInterface : public UInterface {
    GENERATED_BODY()
};

class IUWETriggeredNotificationOverActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTriggeredNotificationData(UUWETriggeredNotificationData* TriggeredNotificationData, APawn* Player);
    
};

