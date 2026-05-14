#pragma once
#include "CoreMinimal.h"
#include "UWEEventKey.h"
#include "OnEventTrackerEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnEventTrackerEvent, FUWEEventKey, EventKey, int32, OldValue, int32, NewValue);

