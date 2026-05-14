#pragma once
#include "CoreMinimal.h"
#include "EUWEClassRepNodeMapping.generated.h"

UENUM()
enum class EUWEClassRepNodeMapping : uint32 {
    NotRouted,
    RelevantAllConnections,
    Spatialize_Static,
    Spatialize_Dynamic,
    Spatialize_Dormancy,
    SimulatedDynamic,
};

