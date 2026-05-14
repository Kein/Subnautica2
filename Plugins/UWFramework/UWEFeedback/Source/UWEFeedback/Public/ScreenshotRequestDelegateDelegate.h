#pragma once
#include "CoreMinimal.h"
#include "ScreenshotRequestDelegateDelegate.generated.h"

class UTexture2D;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FScreenshotRequestDelegate, UTexture2D*, ScreenshotTexture);

