#pragma once
#include "CoreMinimal.h"
#include "ESetByMetadataRecord_NoNameEncryption.generated.h"

UENUM(BlueprintType)
enum class ESetByMetadataRecord_NoNameEncryption : uint8 {
    NONE,
    SERVER,
    CLIENT,
};

