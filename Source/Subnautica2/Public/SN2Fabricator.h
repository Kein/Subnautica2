#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "CraftingRecipeOutput.h"
#include "ECrafterAnimationState.h"
#include "ECraftingResults.h"
#include "Interactable.h"
#include "UWESaveCallbacks.h"
#include "SN2Deconstructable.h"
#include "SN2Movable.h"
#include "SN2Fabricator.generated.h"

class IUWEItemPickup;
class UUWEItemPickup;
class UMaterialInstance;
class UModalActivatableWidget;
class USceneComponent;
class UStaticMesh;
class UUWEAbilitySystemComponent;
class UUWECrafterComponent;
class UUWECraftingRecipe;
class UUWEItemType;
class UUWELoopingCuesComponent;
class UUWEPoweredApplianceComponent;
class UUWESaveComponent;

UCLASS()
class SUBNAUTICA2_API ASN2Fabricator : public AActor, public IInteractable, public IUWESaveCallbacks, public ISN2Deconstructable, public ISN2Movable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeconstructStarted);
    
    UPROPERTY(BlueprintAssignable)
    FOnDeconstructStarted OnDeconstructStarted;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWECrafterComponent* CrafterComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWESaveComponent* SaveComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* CraftingLocation;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UModalActivatableWidget> FabricatorWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText FabricatorScreenCraftingStationTitle;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UUWELoopingCuesComponent* LoopingCuesComponent;
    
    UPROPERTY(Transient)
    UClass* CachedFabricatorWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> PlaceholderMesh;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInstance> PlaceholderFabricationMaterialInstance;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEAbilitySystemComponent* UWEAbilitySystemComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag FabricatingItemCue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEPoweredApplianceComponent* PoweredApplianceComponent;
    
private:
    UPROPERTY(EditAnywhere)
    float ItemThrowForce;
    
public:
    ASN2Fabricator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void StartProxyCraftCue(UUWEItemType* ItemType, float CraftingTime, AActor* RecipientActor);
    
private:
    UFUNCTION()
    void OnCraftingStarted(const TArray<FCraftingRecipeOutput>& RecipeOutput, float CraftingTime, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory);
    
    UFUNCTION()
    void OnCraftingCompleted(const TArray<FCraftingRecipeOutput>& RecipeOutput, ECraftingResults Result, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory);
    
    UFUNCTION()
    void OnCrafterAnimationStateChanged(ECrafterAnimationState PreviousState, ECrafterAnimationState NewState);
    
public:
    UFUNCTION(BlueprintCallable)
    void CraftItemFromClient(UUWECraftingRecipe* Recipe);
    
    UFUNCTION()
    void ClearProxyCraftCue();
    

    // Fix for true pure virtual functions not being implemented
};

