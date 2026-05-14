#pragma once
#include "CoreMinimal.h"
#include "LightRegisteredSignatureDelegate.generated.h"

class ULightComponentBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLightRegisteredSignature, ULightComponentBase*, Light);

