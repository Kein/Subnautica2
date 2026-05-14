#pragma once
#include "CoreMinimal.h"
#include "ECommonSessionInformationState.h"
#include "CommonSessionOnSessionInformationChanged_DynamicDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCommonSessionOnSessionInformationChanged_Dynamic, ECommonSessionInformationState, SessionStatus, const FString&, GameMode, const FString&, MapName);

