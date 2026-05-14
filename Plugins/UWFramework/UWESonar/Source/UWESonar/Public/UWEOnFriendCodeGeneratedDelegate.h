#pragma once
#include "CoreMinimal.h"
#include "UWEOnFriendCodeGeneratedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FUWEOnFriendCodeGenerated, bool, Success, const FString&, ErrorStr, const FString&, FriendCode);

