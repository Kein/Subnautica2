#pragma once
#include "CoreMinimal.h"
#include "OnLinkClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLinkClicked, const FString&, Command, const FString&, Context);

