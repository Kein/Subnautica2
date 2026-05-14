#pragma once
#include "CoreMinimal.h"
#include "EUWEPublishedStatus.generated.h"

UENUM(BlueprintType)
enum class EUWEPublishedStatus : uint8 {
    Published,
    Unpublished,
    Deprecated,
};

