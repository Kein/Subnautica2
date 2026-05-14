#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "ConsumableInfo.h"
#include "SN2RecipeViewModel.generated.h"

class UObject;
class USN2BuilderActionData;
class USN2RecipeRequirementViewModel;
class UTexture2D;
class UUWECraftingComponent;
class UUWECraftingRecipe;
class UUWEPrimaryDataAssetBase;
class UUWEScanData;

UCLASS()
class SUBNAUTICA2_API USN2RecipeViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 TotalOutputCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 TotalInputCount;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsBiomodRecipe;
    
protected:
    UPROPERTY()
    UObject* WorldContextObject;
    
    UPROPERTY()
    UUWECraftingRecipe* Recipe;
    
    UPROPERTY()
    USN2BuilderActionData* BuilderAction;
    
    UPROPERTY()
    UUWEPrimaryDataAssetBase* RelevantAsset;
    
    UPROPERTY(Instanced)
    UUWECraftingComponent* CraftingComponent;
    
    UPROPERTY()
    TArray<USN2RecipeRequirementViewModel*> Requirements;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsPinned;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsLocked;
    
    UPROPERTY(BlueprintReadOnly)
    float CraftTime;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsFirstTimeUnlocked;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentProgressCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 TotalProgressCount;
    
private:
    UPROPERTY()
    TArray<int32> OverrideCraftingComponentInventories;
    
public:
    USN2RecipeViewModel();

    UFUNCTION(BlueprintCallable)
    void UpdateInventory();
    
    UFUNCTION(BlueprintCallable)
    void UnsubscribeFromInventoryNotifications();
    
    UFUNCTION(BlueprintCallable)
    void TrySetRecipePinned(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void TriggerBuilderAction();
    
    UFUNCTION(BlueprintCallable)
    void SubscribeToInventoryNotifications();
    
    UFUNCTION(BlueprintPure)
    bool ShouldIgnoreCost() const;
    
protected:
    UFUNCTION()
    void OnSubsystemInventoryUpdated(const int32& InventoryId);
    
    UFUNCTION()
    void OnScanProgressMade(UUWEScanData* ScanData, int32 TotalScanCount);
    
    UFUNCTION()
    void OnRecipeUnpinned(UUWEPrimaryDataAssetBase* UnpinnedRecipe);
    
    UFUNCTION()
    void OnRecipePinned(UUWEPrimaryDataAssetBase* PinnedRecipe);
    
    UFUNCTION()
    void OnInventoryChanged();
    
    UFUNCTION()
    void OnBioScanRequirementsChanged();
    
    UFUNCTION()
    void OnAnyInventoryChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkAsSeen();
    
    UFUNCTION(BlueprintPure)
    bool IsRecipeEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool HasEnoughSpaceForOutput() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetThumbnail() const;
    
    UFUNCTION(BlueprintPure)
    FText GetSecondaryDescription() const;
    
    UFUNCTION(BlueprintPure)
    TArray<USN2RecipeRequirementViewModel*> GetRequirements() const;
    
    UFUNCTION(BlueprintPure)
    bool GetRecipeNameSubstringExceedsCharacterLimit() const;
    
    UFUNCTION(BlueprintPure)
    FString GetRecipeNameAsString() const;
    
    UFUNCTION(BlueprintPure)
    FText GetRecipeName() const;
    
    UFUNCTION(BlueprintPure)
    UUWECraftingRecipe* GetRecipe() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPublished() const;
    
    UFUNCTION(BlueprintPure)
    FText GetPowerGeneration() const;
    
    UFUNCTION(BlueprintPure)
    FText GetPowerDrain() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetOrderingIndex() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FText> GetLocalPlayerActiveWarnings() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsPinned() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FConsumableInfo> GetConsumableInfo();
    
    UFUNCTION(BlueprintCallable)
    void Disconnect();
    
    UFUNCTION(BlueprintCallable)
    bool CheckItemNameSubstringExceedsCharacterLimit(int32 SubstringCharacterLimit);
    
    UFUNCTION(BlueprintPure)
    bool CanAffordRecipe() const;
    
};

