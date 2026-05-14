#pragma once
#include "CoreMinimal.h"
#include "SaveUpgradeCompletedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FSaveUpgradeCompletedDelegate, bool, Result);

