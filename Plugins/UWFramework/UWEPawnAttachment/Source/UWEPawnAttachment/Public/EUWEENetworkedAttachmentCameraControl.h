#pragma once
#include "CoreMinimal.h"
#include "EUWEENetworkedAttachmentCameraControl.generated.h"

UENUM(BlueprintType)
enum class EUWEENetworkedAttachmentCameraControl : uint8 {
    DoNotChange,
    RelativeToAttachmentSocket,
    SeizeAllControl,
};

