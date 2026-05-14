#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEActorDataAsset.h"
#include "UWEDataAssetInfoInterface.h"
#include "UWEDataAssetOrderingInterface.h"
#include "UWERecipeUnlockRules.h"
#include "UWESculpturalBaseCellCost.h"
#include "EUnlockState.h"
#include "UWEUnlockNotificationPackage.h"
#include "UWEUnlockableAsset.h"
#include "EBuilderMenuCategory.h"
#include "SN2PlacementParams.h"
#include "SN2BuilderActionData.generated.h"

class APlayerState;
class UTexture2D;
class UUWECraftingRecipeCategory;
class UUWEDialogueStoryEvent;

UCLASS(Abstract, EditInlineNew)
class SUBNAUTICA2_API USN2BuilderActionData : public UUWEActorDataAsset, public IUWEUnlockableAsset, public IUWEDataAssetInfoInterface, public IUWEDataAssetOrderingInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SecondaryDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText PowerGenerationText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText PowerDrainText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Thumbnail;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBuilderMenuCategory Category;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UUWECraftingRecipeCategory> RecipeCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 OrderingIndex;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag EventTag;
    
protected:
    UPROPERTY()
    bool ShowShowRecipeCategory;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool bShowRecipeCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EUnlockState DefaultUnlockState;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNotifyOnUnlock;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWERecipeUnlockRules> UpdatedUnlockingRequirements;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEDialogueStoryEvent* TriggeredDialogue;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FText NotificationOverride;
    
public:
    USN2BuilderActionData();

    UFUNCTION(BlueprintCallable)
    bool IsActionUnlockedForPlayer(APlayerState* PS);
    
    UFUNCTION(BlueprintPure)
    static float GetUserRotationIncrementFromParams(const FSN2PlacementParams& Params);
    
    UFUNCTION(BlueprintPure)
    static float GetLocationSnappingSizeFromParams(const FSN2PlacementParams& Params);
    
    UFUNCTION(BlueprintCallable)
    FString GetBuildRequirementsStringForTooltip();
    
    UFUNCTION(BlueprintPure)
    void GetBuildCosts(TArray<FUWESculpturalBaseCellCost>& Costs);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    FUWEUnlockNotificationPackage GetNotificationPackage() override PURE_VIRTUAL(GetNotificationPackage, return FUWEUnlockNotificationPackage{};);
    
};

