#pragma once
#include "CoreMinimal.h"
#include "EUWEImportSaveGameResult.generated.h"

UENUM(BlueprintType)
enum class EUWEImportSaveGameResult : uint8 {
    Error_NoSlotName,
    Error_NoSlots,
    Error_NoData,
    Error_ImportFailed,
    Success,
};

