#pragma once
#include "CoreMinimal.h"
#include "PlantActorsReadyDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlantActorsReadyDelegate, TArray<AActor*>, Plants);

