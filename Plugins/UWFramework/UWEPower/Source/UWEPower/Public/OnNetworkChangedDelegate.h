#pragma once
#include "CoreMinimal.h"
#include "OnNetworkChangedDelegate.generated.h"

class UUWEPowerNodeComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNetworkChanged, TSet<UUWEPowerNodeComponent*>&, Visited);

