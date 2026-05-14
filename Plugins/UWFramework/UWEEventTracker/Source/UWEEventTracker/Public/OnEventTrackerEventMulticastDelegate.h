#pragma once
#include "CoreMinimal.h"
#include "UWEEventKey.h"
#include "OnEventTrackerEventMulticastDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnEventTrackerEventMulticast, FUWEEventKey, EventKey, int32, OldValue, int32, NewValue);

