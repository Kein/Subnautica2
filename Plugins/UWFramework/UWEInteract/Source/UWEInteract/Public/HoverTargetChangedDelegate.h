#pragma once
#include "CoreMinimal.h"
#include "UWETargetActor.h"
#include "HoverTargetChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHoverTargetChanged, FUWETargetActor, OldHoverTarget, FUWETargetActor, NewHoverTarget);

