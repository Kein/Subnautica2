#pragma once
#include "CoreMinimal.h"
#include "LightUnregisteredSignatureDelegate.generated.h"

class ULightComponentBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLightUnregisteredSignature, ULightComponentBase*, Light);

