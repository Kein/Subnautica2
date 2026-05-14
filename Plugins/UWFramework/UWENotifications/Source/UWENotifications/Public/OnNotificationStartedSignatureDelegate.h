#pragma once
#include "CoreMinimal.h"
#include "NotificationData.h"
#include "OnNotificationStartedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNotificationStartedSignature, const FNotificationData&, NotificationData);

