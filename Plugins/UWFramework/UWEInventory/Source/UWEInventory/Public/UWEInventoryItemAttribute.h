#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEInventoryItemAttribute.generated.h"

USTRUCT(BlueprintType)
struct FUWEInventoryItemAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FString Value;
    
    UWEINVENTORY_API FUWEInventoryItemAttribute();
};

