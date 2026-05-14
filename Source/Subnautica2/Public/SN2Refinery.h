#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CraftingRecipeOutput.h"
#include "ECraftingResults.h"
#include "Interactable.h"
#include "OnSimulationPerformedDelegate.h"
#include "Templates/SubclassOf.h"
#include "SN2Refinery.generated.h"

class IUWEItemPickup;
class UUWEItemPickup;
class UCommonActivatableWidget;
class UStaticMeshComponent;
class UTextRenderComponent;
class UUWECrafterComponent;
class UUWECraftingComponent;
class UUWECraftingRecipe;
class UUWEInventoryComponent;
class UUWEPoweredApplianceComponent;

UCLASS()
class SUBNAUTICA2_API ASN2Refinery : public AActor, public IInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWECrafterComponent* CrafterComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWECraftingComponent* CraftingComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEInventoryComponent* InputInventoryComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEInventoryComponent* OutputInventoryComponent;
    
    UPROPERTY(BlueprintAssignable)
    FOnSimulationPerformed OnCraftingReset;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NumSlots;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UStaticMeshComponent* MainMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UTextRenderComponent* StatusTextRenderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UTextRenderComponent* CurrentRecipeTextRenderComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEPoweredApplianceComponent* PoweredApplianceComponent;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCommonActivatableWidget> WidgetClass;
    
    UPROPERTY(ReplicatedUsing=OnRep_TimeLeftToRefine)
    float TimeLeftToRefine;
    
    UPROPERTY(ReplicatedUsing=OnRep_ActiveRecipe)
    UUWECraftingRecipe* ActiveRecipe;
    
public:
    ASN2Refinery(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SimulateRefining();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetActiveRecipeFromClient(UUWECraftingRecipe* NewRecipe);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TimeLeftToRefine();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveRecipe();
    
private:
    UFUNCTION()
    void OnOutputInvChanged();
    
    UFUNCTION()
    void OnMenuClosed();
    
    UFUNCTION()
    void OnInputInvChanged();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void HandleCraftingResult(const TArray<FCraftingRecipeOutput>& RecipeOutput, ECraftingResults Result, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory);
    
    UFUNCTION(BlueprintCallable)
    double GetTimeTillNextRefining();
    
    UFUNCTION(BlueprintPure)
    UUWECraftingRecipe* GetActiveRecipe() const;
    
private:
    UFUNCTION()
    void FillFromCommunalInventoriesFromClient();
    
protected:
    UFUNCTION(BlueprintPure)
    bool CanCraftRecipe(UUWECraftingRecipe* Recipe) const;
    

    // Fix for true pure virtual functions not being implemented
};

