#pragma once
#include "CoreMinimal.h"
#include "EUWENetworkedAttachmentSocketRule.generated.h"

UENUM(BlueprintType)
enum class EUWENetworkedAttachmentSocketRule : uint8 {
    SnapToSocket,
    InterpolateToSocket,
    KeepWorldPosition,
};

