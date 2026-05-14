#pragma once
#include "CoreMinimal.h"
#include "EUWESpawnSystem.generated.h"

UENUM(BlueprintType)
enum class EUWESpawnSystem : uint8 {
    None,
    DynamicItems,
    BuilderItems,
};

