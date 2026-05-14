#pragma once
#include "CoreMinimal.h"
#include "EUWEAttachmentInterpolateToSocketStage.generated.h"

UENUM(BlueprintType)
enum class EUWEAttachmentInterpolateToSocketStage : uint8 {
    None,
    InterpolatingToAttachmentSocket,
    InterpolatingToDetachmentSocket,
};

