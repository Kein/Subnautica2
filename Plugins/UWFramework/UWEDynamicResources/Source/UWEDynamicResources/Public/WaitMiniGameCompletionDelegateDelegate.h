#pragma once
#include "CoreMinimal.h"
#include "UWEMiniGameCompletion.h"
#include "WaitMiniGameCompletionDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaitMiniGameCompletionDelegate, const FUWEMiniGameCompletion&, CompletionResult);

