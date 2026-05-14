#pragma once
#include "CoreMinimal.h"
#include "OnActorPlacedDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorPlaced, AActor*, ActorPlaced);

