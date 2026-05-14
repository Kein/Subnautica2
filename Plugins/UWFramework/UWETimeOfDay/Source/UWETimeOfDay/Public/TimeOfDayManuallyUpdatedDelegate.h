#pragma once
#include "CoreMinimal.h"
#include "TimeOfDayManuallyUpdatedDelegate.generated.h"

class UUWETimeOfDayComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimeOfDayManuallyUpdated, UUWETimeOfDayComponent*, TimeOfDayComponent);

