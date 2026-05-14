#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "SN2AssetRegistry.generated.h"

class USN2BuilderActionData;
class UUWECraftingRecipe;
class UUWEDatabankEntry;
class UUWEDialogueNode;
class UUWEItemType;
class UUWEScanData;
class UUWEStoryGoal;

UCLASS(BlueprintType)
class SUBNAUTICA2_API USN2AssetRegistry : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USN2AssetRegistry();

    UFUNCTION(BlueprintPure)
    static TArray<UUWEDialogueNode*> SN2GetAllDialogues();
    
    UFUNCTION(BlueprintCallable)
    static void RebuildAssetRegistryCachedData();
    
    UFUNCTION(BlueprintPure)
    static TArray<UUWEStoryGoal*> GetAllStoryGoals();
    
    UFUNCTION(BlueprintPure)
    static TArray<UUWEScanData*> GetAllScanDatas();
    
    UFUNCTION(BlueprintPure)
    static TArray<UUWEItemType*> GetAllItemTypes();
    
    UFUNCTION(BlueprintPure)
    static TArray<UUWEDatabankEntry*> GetAllDatabankEntries();
    
    UFUNCTION(BlueprintPure)
    static TArray<UUWECraftingRecipe*> GetAllCraftingRecipes();
    
    UFUNCTION(BlueprintPure)
    static TArray<USN2BuilderActionData*> GetAllBuilderActions();
    
    UFUNCTION(BlueprintPure)
    static UUWEScanData* FindScanDataByTag(FGameplayTag FilterTag);
    
};

