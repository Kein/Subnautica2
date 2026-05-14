#include "SN2WorldGameMode.h"
#include "SN2PlayersCustomSaveInfo.h"

ASN2WorldGameMode::ASN2WorldGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BioBedManager = NULL;
    this->SaveHandle = NULL;
    this->HostPlayerId = 256;
    this->PlayersCustomSaveInfo = CreateDefaultSubobject<USN2PlayersCustomSaveInfo>(TEXT("PlayerInfo"));
    this->bWasEverMultiplayer = false;
}


