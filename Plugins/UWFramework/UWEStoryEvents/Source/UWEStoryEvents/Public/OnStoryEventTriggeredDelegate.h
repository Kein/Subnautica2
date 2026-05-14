#pragma once
#include "CoreMinimal.h"
#include "OnStoryEventTriggeredDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnStoryEventTriggered, AActor*, Target);

