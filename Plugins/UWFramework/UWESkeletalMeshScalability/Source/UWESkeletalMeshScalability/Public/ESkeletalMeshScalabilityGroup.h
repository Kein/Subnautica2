#pragma once
#include "CoreMinimal.h"
#include "ESkeletalMeshScalabilityGroup.generated.h"

UENUM(BlueprintType)
enum class ESkeletalMeshScalabilityGroup : uint8 {
    Misc,
    Resource,
    SmallCreature,
    LargeCreature,
};

