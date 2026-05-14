#pragma once
#include "CoreMinimal.h"
#include "SN2SpawnedCharacterPartsChangedDelegate.generated.h"

class USN2PlayerArchetypeComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSN2SpawnedCharacterPartsChanged, USN2PlayerArchetypeComponent*, ComponentWithChangedParts);

