#pragma once
#include "CoreMinimal.h"
#include "EGameModeAliasAsEnum.generated.h"

UENUM(BlueprintType)
enum class EGameModeAliasAsEnum : uint8 {
    None,
    Survival,
    Creative,
};

