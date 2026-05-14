#include "SN2PlayerStart.h"

ASN2PlayerStart::ASN2PlayerStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUnfreezeTimeOfDay = true;
    this->bSetTimeOfDay = false;
    this->bShouldSuppressAllNotifications = true;
    this->bShouldSkipAllQueuedDialogue = true;
    this->SecondsToSuppressMessages = 2.00f;
    this->TimeOfDay = 0.50f;
    this->bSetGameTime = false;
    this->GameTime = 0.00f;
}

void ASN2PlayerStart::OnPreSpawnReady_Implementation(AController* Player) {
}



