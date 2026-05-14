#pragma once
#include "CoreMinimal.h"
#include "SN2InputAngleDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSN2InputAngleDelegate, float, Angle);

