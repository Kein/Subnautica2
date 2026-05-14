#pragma once
#include "CoreMinimal.h"
#include "EUWEItemAnimMontageSelection.generated.h"

UENUM(BlueprintType)
enum class EUWEItemAnimMontageSelection : uint8 {
    FirstEquip,
    Equip,
    Unequip,
    PrimaryUse,
    PrimaryUseEnd,
    SecondaryUse,
    SecondaryUseEnd,
};

