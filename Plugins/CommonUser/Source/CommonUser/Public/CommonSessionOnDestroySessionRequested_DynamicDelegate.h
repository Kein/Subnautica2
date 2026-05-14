#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CommonSessionOnDestroySessionRequested_DynamicDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCommonSessionOnDestroySessionRequested_Dynamic, const FPlatformUserId&, LocalPlatformUserId, const FName&, SessionName);

