#pragma once
#include "CoreMinimal.h"
#include "OnDirectLinkAddedDelegate.generated.h"

class UUWEPowerNodeComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDirectLinkAdded, UUWEPowerNodeComponent*, OtherNode);

