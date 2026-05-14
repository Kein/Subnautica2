#pragma once
#include "CoreMinimal.h"
#include "EUWEENetworkedAttachmentVelocityCalculation.generated.h"

UENUM(BlueprintType)
enum class EUWEENetworkedAttachmentVelocityCalculation : uint8 {
    None,
    CalculateVelocityOutOfMovement,
    SyncVelocityWithOwner,
};

