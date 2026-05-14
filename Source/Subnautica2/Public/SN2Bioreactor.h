#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TimerHandle.h"
#include "GameplayTagContainer.h"
#include "ESN2BioreactorPowerConsumptionState.h"
#include "SN2BioreactorPowerConsumptionConfig.h"
#include "SN2Bioreactor.generated.h"

class USN2BioreactorInteractBoxComponent;
class USN2BioreactorViewModel;
class UStaticMeshComponent;
class UUWEInventoryComponent;
class UUWEItemType;
class UUWEPowerGeneratorComponent;
class UUWEPowerNodeSimulation;
class UUWESaveComponent;

UCLASS()
class SUBNAUTICA2_API ASN2Bioreactor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerOutputChanged, float, Power);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerConsumptionStateChanged, ESN2BioreactorPowerConsumptionState, State);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemChanged);
    
    UPROPERTY(BlueprintAssignable)
    FOnItemChanged OnItemChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnPowerConsumptionStateChanged OnPowerConsumptionStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnPowerOutputChanged OnPowerOutputChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEPowerGeneratorComponent* PowerGeneratorComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWESaveComponent* SaveComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere, ReplicatedUsing=OnRep_CurrentItemType)
    UUWEItemType* CurrentItemType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer AllowedItemTags;
    
    UPROPERTY(BlueprintReadOnly, Replicated, SaveGame)
    float PreConsumedPercentage;
    
    UPROPERTY(BlueprintReadOnly, Replicated, SaveGame)
    float CurrentDepletionStartGameplayTime;
    
    UPROPERTY(BlueprintReadOnly, Replicated, SaveGame)
    float CurrentDepletionEndGameplayTime;
    
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_CurrentState)
    ESN2BioreactorPowerConsumptionState CurrentState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSN2BioreactorPowerConsumptionConfig PowerConsumptionNormal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSN2BioreactorPowerConsumptionConfig PowerConsumptionOverdrive;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USN2BioreactorInteractBoxComponent* InteractBoxComponent;
    
    UPROPERTY()
    FTimerHandle NextDepletionTimer;
    
    UPROPERTY()
    FTimerHandle LoadOnNextTickTimer;
    
    UPROPERTY()
    USN2BioreactorViewModel* WorldViewModel;
    
public:
    ASN2Bioreactor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCurrentState(ESN2BioreactorPowerConsumptionState NewState);
    
protected:
    UFUNCTION()
    void OnRep_CurrentState();
    
    UFUNCTION()
    void OnRep_CurrentItemType() const;
    
    UFUNCTION()
    void OnPowerSimOutputChanged(float NewOutput);
    
    UFUNCTION()
    void OnPowerSimItemChanged(UUWEItemType* ItemType);
    
    UFUNCTION()
    void OnInventoryIdAssigned();
    
    UFUNCTION()
    void InitNewPowerSimulation(UUWEPowerNodeSimulation* Simulation);
    
public:
    UFUNCTION(BlueprintPure)
    USN2BioreactorViewModel* GetWorldViewModel();
    
    UFUNCTION(BlueprintPure)
    float GetRemainingEnergyPercentage() const;
    
    UFUNCTION(BlueprintPure)
    ESN2BioreactorPowerConsumptionState GetCurrentPowerState() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentPowerOutput() const;
    
    UFUNCTION(BlueprintPure)
    UUWEItemType* GetCurrentItemType() const;
    
    UFUNCTION(BlueprintCallable)
    void DiscardCurrentItem();
    
};

