#pragma once
#include "CoreMinimal.h"
#include "RefineryClientServerMessage.generated.h"

class UUWECraftingRecipe;

USTRUCT()
struct FRefineryClientServerMessage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UUWECraftingRecipe* NewRecipe;
    
    SUBNAUTICA2_API FRefineryClientServerMessage();
};

