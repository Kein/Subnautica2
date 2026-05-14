#pragma once
#include "CoreMinimal.h"
#include "UWEStimulusIntensityState.h"
#include "OnStimulusIntensityChangeSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStimulusIntensityChangeSignature, FUWEStimulusIntensityState, ChangedIntensityMap);

