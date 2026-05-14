#pragma once
#include "CoreMinimal.h"
#include "EGPPStoreType.generated.h"

UENUM(BlueprintType)
enum class EGPPStoreType : uint8 {
    None,
    GooglePlayStore,
    OneStore,
    GalaxyStore,
    AppStore,
    EpicGamesStore,
    SteamStore,
    MicrosoftStore,
    PlayStationStore,
};

