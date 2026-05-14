#pragma once
#include "CoreMinimal.h"
#include "EUWENetworkedAttachmentSocketInterpolationType.generated.h"

UENUM(BlueprintType)
enum class EUWENetworkedAttachmentSocketInterpolationType : uint8 {
    Exponential,
    Linear,
};

