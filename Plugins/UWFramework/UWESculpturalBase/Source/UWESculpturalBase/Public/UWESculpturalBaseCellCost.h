#pragma once
#include "CoreMinimal.h"
#include "UWESculpturalBaseCellCost.generated.h"

class UUWEItemType;

USTRUCT(BlueprintType)
struct FUWESculpturalBaseCellCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UUWEItemType> ItemType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float Cost;
    
    UWESCULPTURALBASE_API FUWESculpturalBaseCellCost();
};

