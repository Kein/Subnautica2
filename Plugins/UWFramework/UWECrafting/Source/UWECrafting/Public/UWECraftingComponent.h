#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEInventoryItem.h"
#include "CraftingRecipeRequirement.h"
#include "UWECraftingComponent.generated.h"

class IUWEItemPickup;
class UUWEItemPickup;
class UUWECrafterComponent;
class UUWECraftingRecipe;
class UUWEItemType;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWECRAFTING_API UUWECraftingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAnyRegisteredInventoryChanged);
    
    UPROPERTY(BlueprintAssignable)
    FOnAnyRegisteredInventoryChanged OnAnyRegisteredInventoryChanged;
    
    UPROPERTY(Instanced)
    UUWECrafterComponent* CurrentCrafterComponent;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RegisteredSources)
    TArray<int32> RegisteredSourceIds;
    
    UPROPERTY(Transient)
    TArray<int32> CachedSources;
    
public:
    UUWECraftingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(Reliable, Server)
    void ServerCraftItemFromRecipe(const TSoftObjectPtr<UUWECraftingRecipe>& Recipe, UUWECrafterComponent* Crafter, const TScriptInterface<IUWEItemPickup>& OutputInventory, bool bForceImmediate);
    
protected:
    UFUNCTION()
    void OnRep_RegisteredSources();
    
private:
    UFUNCTION()
    void OnInventoryUpdated(const int32& InventoryId);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasAnyCommunalInventoriesRegistered();
    
    UFUNCTION(BlueprintPure)
    FString GetRequirementsString(const TArray<FCraftingRecipeRequirement>& Requirements, const TArray<int32>& AdditionalConsideredInventories) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FUWEInventoryItem> GetAllNearbyItemsOfItemType(const UUWEItemType* ItemType) const;
    
protected:
    UFUNCTION()
    void BroadcastAnyRegisteredInventoryChanged();
    
};

