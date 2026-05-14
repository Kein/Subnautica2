#pragma once
#include "CoreMinimal.h"
#include "MercunaIsReachable2DResultDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMercunaIsReachable2DResult, float, PathDistance);

