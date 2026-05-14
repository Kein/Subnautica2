#pragma once
#include "CoreMinimal.h"
#include "UWECarryableActorInterfaceCallbackDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUWECarryableActorInterfaceCallback, AActor*, Actor);

