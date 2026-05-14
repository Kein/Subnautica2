#pragma once
#include "CoreMinimal.h"
#include "SonarTwitchLinkResponse.h"
#include "OnTwitchLinkRequestedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTwitchLinkRequestedDelegate, FSonarTwitchLinkResponse, Response);

