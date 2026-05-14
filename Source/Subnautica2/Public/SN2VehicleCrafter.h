#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "CraftingRecipeOutput.h"
#include "ECraftingResults.h"
#include "Interactable.h"
#include "SN2Deconstructable.h"
#include "SN2Movable.h"
#include "Templates/SubclassOf.h"
#include "SN2VehicleCrafter.generated.h"

class IUWEItemPickup;
class UUWEItemPickup;
class UCommonActivatableWidget;
class UModalActivatableWidget;
class USN2CraftingMenu;
class USceneComponent;
class UUWECrafterComponent;
class UUWECraftingRecipe;

UCLASS()
class SUBNAUTICA2_API ASN2VehicleCrafter : public AActor, public IInteractable, public ISN2Deconstructable, public ISN2Movable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWECrafterComponent* CrafterComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag CraftingVehicleCue;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* CraftingLocation;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USN2CraftingMenu* Menu;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UModalActivatableWidget> VehicleCrafterWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCommonActivatableWidget> WidgetClass;
    
public:
    ASN2VehicleCrafter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnCraftingStarted(const TArray<FCraftingRecipeOutput>& RecipeOutput, float CraftingTime, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory);
    
    UFUNCTION()
    void OnCraftingMenuClosed();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnCraftingError();
    
private:
    UFUNCTION()
    void OnCraftingCompleted(const TArray<FCraftingRecipeOutput>& RecipeOutput, ECraftingResults Result, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastHandleCraftingResult(const TArray<FCraftingRecipeOutput>& RecipeOutput, ECraftingResults Result);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void HandleCraftingResult(const TArray<FCraftingRecipeOutput>& RecipeOutput, ECraftingResults Result, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory);
    
    UFUNCTION()
    bool EnoughSpaceForVehicle(UUWECraftingRecipe* Recipe) const;
    
    UFUNCTION(BlueprintCallable)
    void CraftItemFromClient(UUWECraftingRecipe* Recipe);
    
    UFUNCTION()
    bool CanCraftVehicle(UUWECraftingRecipe* Recipe, FGameplayTag& ReasonOut);
    
private:
    UFUNCTION()
    bool CanCraftCheck(UUWECraftingRecipe* Recipe) const;
    

    // Fix for true pure virtual functions not being implemented
};

