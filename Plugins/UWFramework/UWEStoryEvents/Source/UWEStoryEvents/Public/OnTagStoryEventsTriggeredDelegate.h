#pragma once
#include "CoreMinimal.h"
#include "OnTagStoryEventsTriggeredDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTagStoryEventsTriggered, AActor*, Target);

