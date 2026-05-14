#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnActorTakenDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorTaken, TSubclassOf<AActor>, ActorClassTaken);

