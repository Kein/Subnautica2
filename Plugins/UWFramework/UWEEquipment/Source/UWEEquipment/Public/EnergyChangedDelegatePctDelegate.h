#pragma once
#include "CoreMinimal.h"
#include "EnergyChangedDelegatePctDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnergyChangedDelegatePct, float, PercentEnergy);

