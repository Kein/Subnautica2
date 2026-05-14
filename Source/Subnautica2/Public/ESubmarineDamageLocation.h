#pragma once
#include "CoreMinimal.h"
#include "ESubmarineDamageLocation.generated.h"

UENUM(BlueprintType)
enum class ESubmarineDamageLocation : uint8 {
    None,
    Interior,
    Exterior,
};

