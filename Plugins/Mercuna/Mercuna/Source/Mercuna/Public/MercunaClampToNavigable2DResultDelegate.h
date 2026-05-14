#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MercunaUsageTypes.h"
#include "MercunaClampToNavigable2DResultDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMercunaClampToNavigable2DResult, FVector, ClampedPosition, FMercunaUsageTypes, ClampedUsageTypes);

