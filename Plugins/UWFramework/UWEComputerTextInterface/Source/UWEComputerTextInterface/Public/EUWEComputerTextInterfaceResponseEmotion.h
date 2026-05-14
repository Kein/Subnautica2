#pragma once
#include "CoreMinimal.h"
#include "EUWEComputerTextInterfaceResponseEmotion.generated.h"

UENUM(BlueprintType)
enum class EUWEComputerTextInterfaceResponseEmotion : uint8 {
    Neutral,
    Angry,
    Sad,
    Happy,
};

