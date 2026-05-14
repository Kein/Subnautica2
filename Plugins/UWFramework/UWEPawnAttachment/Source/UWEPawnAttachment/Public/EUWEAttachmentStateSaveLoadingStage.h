#pragma once
#include "CoreMinimal.h"
#include "EUWEAttachmentStateSaveLoadingStage.generated.h"

UENUM(BlueprintType)
enum class EUWEAttachmentStateSaveLoadingStage : uint8 {
    None,
    AwaitingInstance,
    AwaitingInstanceInitialization,
    Done,
};

