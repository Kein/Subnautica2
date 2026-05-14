#pragma once
#include "CoreMinimal.h"
#include "EUWEMeshType.generated.h"

UENUM(BlueprintType)
enum class EUWEMeshType : uint8 {
    None,
    Internal,
    External,
};

