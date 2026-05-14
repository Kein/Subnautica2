#pragma once
#include "CoreMinimal.h"
#include "ConstructTargetChangedDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FConstructTargetChangedDelegate, AActor*, OldConstructTarget, AActor*, NewConstructTarget);

