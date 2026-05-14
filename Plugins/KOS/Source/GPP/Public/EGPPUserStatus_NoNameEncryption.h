#pragma once
#include "CoreMinimal.h"
#include "EGPPUserStatus_NoNameEncryption.generated.h"

UENUM(BlueprintType)
enum class EGPPUserStatus_NoNameEncryption : uint8 {
    Online,
    Playing,
    Away,
    Offline,
};

