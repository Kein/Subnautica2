#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "UWEInventoryItem.h"
#include "UWEInventoryContainer.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWEInventoryContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    TArray<FUWEInventoryItem> Items;
    
private:
    UPROPERTY()
    AActor* Owner;
    
public:
    UWEINVENTORY_API FUWEInventoryContainer();
};

