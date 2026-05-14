#pragma once
#include "CoreMinimal.h"
#include "OnPostPickupItemDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPostPickupItem, AActor*, PickupActor);

