#pragma once
#include "CoreMinimal.h"
#include "SonarNewsfeedEntryResponse.h"
#include "NewsfeedListDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNewsfeedListDelegate, bool, Success, TArray<FSonarNewsfeedEntryResponse>, Response);

