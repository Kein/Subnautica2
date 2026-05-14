#pragma once
#include "CoreMinimal.h"
#include "SonarSaveGameResponse.h"
#include "UploadCompletedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUploadCompletedDelegate, bool, Success, FSonarSaveGameResponse, Response);

