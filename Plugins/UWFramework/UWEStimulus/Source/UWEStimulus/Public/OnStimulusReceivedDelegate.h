#pragma once
#include "CoreMinimal.h"
#include "UWEStimulusEmitterData.h"
#include "OnStimulusReceivedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStimulusReceived, FUWEStimulusEmitterData, Data);

