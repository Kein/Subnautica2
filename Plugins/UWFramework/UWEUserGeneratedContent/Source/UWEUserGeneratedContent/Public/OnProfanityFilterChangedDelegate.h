#pragma once
#include "CoreMinimal.h"
#include "OnProfanityFilterChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProfanityFilterChanged, bool, bProfanityFilterEnabled);

