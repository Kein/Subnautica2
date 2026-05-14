#pragma once
#include "CoreMinimal.h"
#include "OnTwitchAccountStatusDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTwitchAccountStatus, const bool, bHasConnection);

