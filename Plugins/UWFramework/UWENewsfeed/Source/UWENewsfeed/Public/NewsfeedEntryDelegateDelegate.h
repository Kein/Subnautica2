#pragma once
#include "CoreMinimal.h"
#include "SonarNewsfeedEntryResponse.h"
#include "NewsfeedEntryDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNewsfeedEntryDelegate, bool, Success, FSonarNewsfeedEntryResponse, Response);

