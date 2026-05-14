#pragma once
#include "CoreMinimal.h"
#include "RadioMessagesAvailableChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRadioMessagesAvailableChanged, bool, bHasRadioMessage);

