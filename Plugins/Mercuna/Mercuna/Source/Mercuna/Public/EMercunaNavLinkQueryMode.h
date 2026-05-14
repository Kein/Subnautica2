#pragma once
#include "CoreMinimal.h"
#include "EMercunaNavLinkQueryMode.generated.h"

UENUM(BlueprintType)
enum class EMercunaNavLinkQueryMode : uint8 {
    All,
    CurrentGrid,
    None,
};

