#pragma once
#include "CoreMinimal.h"
#include "UWEDataAssetInfoInterface.h"
#include "UWEDataAssetOrderingInterface.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEUnlockNotificationPackage.h"
#include "UWEUnlockableAsset.h"
#include "CraftingRecipeOutput.h"
#include "CraftingRecipeRequirement.h"
#include "ERecipeState.h"
#include "UWERecipeUnlockRules.h"
#include "UWECraftingRecipe.generated.h"

class UTexture2D;
class UUWECraftingRecipeCategory;
class UUWEDialogueStoryEvent;

UCLASS()
class UWECRAFTING_API UUWECraftingRecipe : public UUWEPrimaryDataAssetBase, public IUWEUnlockableAsset, public IUWEDataAssetInfoInterface, public IUWEDataAssetOrderingInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FText Name;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> Thumbnail;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEDialogueStoryEvent* TriggeredDialogue;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FText NotificationOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FCraftingRecipeOutput> Output;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FCraftingRecipeRequirement> Requirements;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ERecipeState DefaultRecipeState;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNotifyOnUnlock;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWERecipeUnlockRules> UpdatedUnlockingRequirements;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CraftingTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UUWECraftingRecipeCategory> Category;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 OrderingIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool DuplicatesBuilderActionData;
    
    UUWECraftingRecipe();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    FUWEUnlockNotificationPackage GetNotificationPackage() override PURE_VIRTUAL(GetNotificationPackage, return FUWEUnlockNotificationPackage{};);
    
};

