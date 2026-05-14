#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "UWERecipeUnlockRuleEntry.h"
#include "UWERecipeUnlockRules.h"
#include "UWECraftingStatics.generated.h"

class APlayerState;
class UObject;
class UUWECraftingRecipe;
class UUWEItemType;
class UUWEPrimaryDataAssetBase;

UCLASS(BlueprintType)
class UWECRAFTING_API UUWECraftingStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWECraftingStatics();

    UFUNCTION(BlueprintCallable)
    static bool TargetSatisfiesRequirements(UUWEPrimaryDataAssetBase* Recipe, const TArray<FUWERecipeUnlockRules>& UpdatedUnlockingRequirements, APlayerState* PlayerState);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ShouldIgnoreUnlockRequirements(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool ItemRecipeIsUnlocked(UUWEItemType* ItemType, APlayerState* PlayerState);
    
    UFUNCTION(BlueprintPure)
    static bool IsRecipeUnlockedForPlayer(UUWECraftingRecipe* Recipe, APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetTagAtDepth(const FGameplayTag& Tag, const int32 Depth);
    
    UFUNCTION(BlueprintPure)
    static FUWERecipeUnlockRuleEntry ExtractRule(const FUWERecipeUnlockRuleEntry& InEntry, UUWEPrimaryDataAssetBase* ParentAsset);
    
};

