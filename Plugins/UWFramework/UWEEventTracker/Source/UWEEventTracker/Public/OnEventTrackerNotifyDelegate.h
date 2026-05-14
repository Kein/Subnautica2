#pragma once
#include "CoreMinimal.h"
#include "UWEEventKey.h"
#include "OnEventTrackerNotifyDelegate.generated.h"

class UUWEEventTrackerComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnEventTrackerNotify, UUWEEventTrackerComponent*, Tracker, FUWEEventKey, Key, int32, Value, bool, IsNewKey);

