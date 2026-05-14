#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWEInventoryItem.h"
#include "UWEFarmTraySaveData.h"
#include "UWEPlantItemActor.h"
#include "UWEFarmTrayBase.generated.h"

class UStaticMeshComponent;
class UUWEAbilitySystemComponent;
class UUWEInventoryComponent;
class UUWEInventoryInteractionComponent;
class UUWESaveComponent;

UCLASS(Abstract)
class UWEFARMING_API AUWEFarmTrayBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEInventoryInteractionComponent* InventoryInteractionComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWESaveComponent* SaveComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> FarmTraySockets;
    
private:
    UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_GrowingPlants)
    TArray<FUWEPlantItemActor> GrowingPlants;
    
    UPROPERTY(SaveGame)
    FUWEFarmTraySaveData SaveData;
    
public:
    AUWEFarmTrayBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnSeedRemoved(const FUWEInventoryItem& InventoryItem);
    
    UFUNCTION()
    void OnSeedAdded(const FUWEInventoryItem& InventoryItem);
    
    UFUNCTION()
    void OnRep_GrowingPlants(const TArray<FUWEPlantItemActor>& OldGrowingPlants);
    
    UFUNCTION()
    void OnPlantsLoaded(TArray<AActor*> Plants);
    
};

