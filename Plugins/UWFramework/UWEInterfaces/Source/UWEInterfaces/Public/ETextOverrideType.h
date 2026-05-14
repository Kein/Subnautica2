#pragma once
#include "CoreMinimal.h"
#include "ETextOverrideType.generated.h"

UENUM(BlueprintType)
enum class ETextOverrideType : uint8 {
    None,
    ObjectName,
    ToolName,
};

