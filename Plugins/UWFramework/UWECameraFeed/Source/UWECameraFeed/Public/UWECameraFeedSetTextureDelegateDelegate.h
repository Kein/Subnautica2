#pragma once
#include "CoreMinimal.h"
#include "UWECameraFeedSetTextureDelegateDelegate.generated.h"

class UTexture;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUWECameraFeedSetTextureDelegate, UTexture*, Texture);

