#pragma once
#include "CoreMinimal.h"
#include "OnEventTrackerSaveDelegate.generated.h"

class UUWEEventTrackerComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEventTrackerSave, UUWEEventTrackerComponent*, Tracker, float, duration);

