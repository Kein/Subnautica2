#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NotificationData.h"
#include "UWENotificationStatics.generated.h"

class APlayerState;
class UObject;

UCLASS(BlueprintType)
class UWENOTIFICATIONS_API UUWENotificationStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWENotificationStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SendNotificationToPlayers(const UObject* WorldContextObject, const FNotificationData& Data, TArray<APlayerState*> Players);
    
    UFUNCTION(BlueprintCallable)
    static void ClearNotifications(APlayerState* Player);
    
    UFUNCTION(BlueprintPure)
    static bool ArePlayerNotificationsSuppressed(APlayerState* Player);
    
};

