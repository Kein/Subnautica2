#pragma once
#include "CoreMinimal.h"
#include "UWEInventoryItem.h"
#include "UWEPlantItemActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWEPlantItemActor {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    AActor* PlantActor;
    
    UPROPERTY(VisibleAnywhere)
    FUWEInventoryItem InventoryItem;
    
    UWEFARMING_API FUWEPlantItemActor();
};

