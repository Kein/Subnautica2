#pragma once
#include "CoreMinimal.h"
#include "EUWEGameplayCueNotify_AttachPolicy.generated.h"

UENUM(BlueprintType)
enum class EUWEGameplayCueNotify_AttachPolicy : uint8 {
    DoNotAttach,
    AttachToTarget,
    AttachToInstigator,
    AttachToEffectCauser,
    AttachToTargetAttachComponent,
    AttachToSourceObject,
};

