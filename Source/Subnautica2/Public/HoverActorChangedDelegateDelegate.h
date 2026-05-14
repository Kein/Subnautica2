#pragma once
#include "CoreMinimal.h"
#include "HoverActorChangedDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHoverActorChangedDelegate, AActor*, NewHoverActor);

