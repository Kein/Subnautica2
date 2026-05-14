#pragma once
#include "CoreMinimal.h"
#include "ESonarNewsfeedContentType.generated.h"

UENUM(BlueprintType)
enum class ESonarNewsfeedContentType : uint8 {
    Text,
    Image,
    Video,
};

