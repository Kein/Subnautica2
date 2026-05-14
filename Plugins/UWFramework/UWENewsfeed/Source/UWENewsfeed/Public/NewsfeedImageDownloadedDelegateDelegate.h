#pragma once
#include "CoreMinimal.h"
#include "NewsfeedImageDownloadedDelegateDelegate.generated.h"

class UTexture2D;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNewsfeedImageDownloadedDelegate, UTexture2D*, ImageTexture);

