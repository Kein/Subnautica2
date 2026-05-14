#include "UWENotificationStatics.h"

UUWENotificationStatics::UUWENotificationStatics() {
}

void UUWENotificationStatics::SendNotificationToPlayers(const UObject* WorldContextObject, const FNotificationData& Data, TArray<APlayerState*> Players) {
}

void UUWENotificationStatics::ClearNotifications(APlayerState* Player) {
}

bool UUWENotificationStatics::ArePlayerNotificationsSuppressed(APlayerState* Player) {
    return false;
}


