#pragma once
#include "CoreMinimal.h"
#include "EUWEStartScreenState.h"
#include "OnStartScreenStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartScreenStateChanged, EUWEStartScreenState, NewState);

