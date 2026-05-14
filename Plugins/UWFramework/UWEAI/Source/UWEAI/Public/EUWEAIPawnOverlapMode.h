#pragma once
#include "CoreMinimal.h"
#include "EUWEAIPawnOverlapMode.generated.h"

UENUM(BlueprintType)
enum class EUWEAIPawnOverlapMode : uint8 {
    Disabled,
    UnrealGenerateOverlapEvents,
    MakeAsyncOverlapQueries,
};

