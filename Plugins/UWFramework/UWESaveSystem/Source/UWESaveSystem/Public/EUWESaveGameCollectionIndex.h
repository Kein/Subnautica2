#pragma once
#include "CoreMinimal.h"
#include "EUWESaveGameCollectionIndex.generated.h"

UENUM(BlueprintType)
enum class EUWESaveGameCollectionIndex : uint8 {
    DefaultSaveGame,
    SaveGame1,
    SaveGameIndexCount,
    InvalidIndex,
};

