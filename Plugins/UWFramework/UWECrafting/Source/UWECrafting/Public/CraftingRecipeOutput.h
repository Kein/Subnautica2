#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CraftingRecipeOutput.generated.h"

class AActor;
class UUWEItemType;

USTRUCT(BlueprintType)
struct FCraftingRecipeOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UUWEItemType> ItemType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NumItems;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector CollisionCheckSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSoftClassPtr<AActor>> ClassesToIgnoreForCollisionCheck;
    
    UWECRAFTING_API FCraftingRecipeOutput();
};

