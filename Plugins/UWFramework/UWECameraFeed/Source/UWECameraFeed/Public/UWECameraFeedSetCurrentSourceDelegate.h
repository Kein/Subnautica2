#pragma once
#include "CoreMinimal.h"
#include "UWECameraFeedSetCurrentSourceDelegate.generated.h"

class UUWECameraFeedSourceComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUWECameraFeedSetCurrentSource, UUWECameraFeedSourceComponent*, Source);

