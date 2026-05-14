#pragma once
#include "CoreMinimal.h"
#include "EVolumeType.generated.h"

UENUM(BlueprintType)
enum class EVolumeType : uint8 {
    EVolumeType_None,
    EVolumeType_Air,
    EVolumeType_Water,
};

