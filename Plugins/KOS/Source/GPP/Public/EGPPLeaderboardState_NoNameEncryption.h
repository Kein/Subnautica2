#pragma once
#include "CoreMinimal.h"
#include "EGPPLeaderboardState_NoNameEncryption.generated.h"

UENUM(BlueprintType)
enum class EGPPLeaderboardState_NoNameEncryption : uint8 {
    Ready,
    Counting,
    Finished,
};

