#pragma once
#include "CoreMinimal.h"
#include "FNewsfeedListStatus.h"
#include "NewsfeedListStatusDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNewsfeedListStatusDelegate, FNewsfeedListStatus, Status);

