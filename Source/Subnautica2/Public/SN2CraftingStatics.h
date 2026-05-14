#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SN2CraftingStatics.generated.h"

class APlayerState;
class UUWECrafterComponent;
class UUWECraftingRecipe;

UCLASS(BlueprintType)
class SUBNAUTICA2_API USN2CraftingStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USN2CraftingStatics();

    UFUNCTION(BlueprintCallable)
    static void UnlockAllNonEntitlementRecipes(APlayerState* PS);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UUWECraftingRecipe*> GetAllowedRecipes(UUWECrafterComponent* CrafterComponentRef);
    
};

