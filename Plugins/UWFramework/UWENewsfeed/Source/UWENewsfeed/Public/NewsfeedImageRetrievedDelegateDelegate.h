#pragma once
#include "CoreMinimal.h"
#include "NewsfeedImageRetrievedDelegateDelegate.generated.h"

class UImage;
class UTexture2D;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNewsfeedImageRetrievedDelegate, UTexture2D*, ImageTexture, const UImage*, Image);

