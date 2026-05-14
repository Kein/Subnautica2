#pragma once
#include "CoreMinimal.h"
#include "UWEPowerSimulationState.h"
#include "UWEPowerSystemSimUpdatedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUWEPowerSystemSimUpdatedDelegate, const FUWEPowerSimulationState&, State);

