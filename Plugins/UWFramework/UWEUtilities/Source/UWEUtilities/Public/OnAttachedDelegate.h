#pragma once
#include "CoreMinimal.h"
#include "OnAttachedDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttached, AActor*, AttachedTo);

