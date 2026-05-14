#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStartCompletedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStartCompleted, int32, PlayerId);

