#pragma once
#include "CoreMinimal.h"
#include "EUWENetworkedAttachmentAnimationMode.generated.h"

UENUM(BlueprintType)
enum class EUWENetworkedAttachmentAnimationMode : uint8 {
    None,
    Montage,
    Sequencer,
};

