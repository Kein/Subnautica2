#pragma once
#include "CoreMinimal.h"
#include "EUWEProxyUpdateType.h"
#include "OnProxyUpdateFinishedDelegate.generated.h"

class AUWESculpturalBaseProxy;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnProxyUpdateFinished, AUWESculpturalBaseProxy*, Proxy, EUWEProxyUpdateType, UpdateType);

