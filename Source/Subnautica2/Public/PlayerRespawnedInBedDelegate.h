#pragma once
#include "CoreMinimal.h"
#include "PlayerRespawnedInBedDelegate.generated.h"

class ASN2PlayerCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerRespawnedInBed, ASN2PlayerCharacter*, SpawnedPlayer);

