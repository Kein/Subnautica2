#pragma once
#include "CoreMinimal.h"
#include "OnDirectLinkRemovedDelegate.generated.h"

class UUWEPowerNodeComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDirectLinkRemoved, UUWEPowerNodeComponent*, OtherNode);

