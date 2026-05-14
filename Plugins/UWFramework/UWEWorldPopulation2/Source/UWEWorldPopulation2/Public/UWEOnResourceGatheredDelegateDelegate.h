#pragma once
#include "CoreMinimal.h"
#include "UWEOnResourceGatheredDelegateDelegate.generated.h"

class AUWEWorldPopResourceBaseActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUWEOnResourceGatheredDelegate, AUWEWorldPopResourceBaseActor*, ResourceActor, bool, bGatheredState);

