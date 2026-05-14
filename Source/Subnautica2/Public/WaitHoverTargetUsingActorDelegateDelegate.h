#pragma once
#include "CoreMinimal.h"
#include "UWETargetActor.h"
#include "WaitHoverTargetUsingActorDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaitHoverTargetUsingActorDelegate, const FUWETargetActor&, HoverTarget);

