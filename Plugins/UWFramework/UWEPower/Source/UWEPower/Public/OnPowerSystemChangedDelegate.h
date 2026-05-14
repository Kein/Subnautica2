#pragma once
#include "CoreMinimal.h"
#include "OnPowerSystemChangedDelegate.generated.h"

class UUWEPowerSystemComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerSystemChanged, UUWEPowerSystemComponent*, NewPowerSystem);

