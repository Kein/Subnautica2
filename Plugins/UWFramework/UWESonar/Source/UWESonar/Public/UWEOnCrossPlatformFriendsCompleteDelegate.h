#pragma once
#include "CoreMinimal.h"
#include "UWEOnCrossPlatformFriendsCompleteDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FUWEOnCrossPlatformFriendsComplete, bool, Success, const FString&, ErrorStr);

