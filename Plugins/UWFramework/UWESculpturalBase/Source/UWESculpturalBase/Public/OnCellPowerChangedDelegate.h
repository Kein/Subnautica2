#pragma once
#include "CoreMinimal.h"
#include "OnCellPowerChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCellPowerChanged, int32, StructureId);

