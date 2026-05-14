#pragma once
#include "CoreMinimal.h"
#include "FGameplayTagTarget.generated.h"

UENUM(BlueprintType)
enum class FGameplayTagTarget : uint8 {
    Player,
    PossessedPawn,
    PlayerAndPossessedPawn,
};

