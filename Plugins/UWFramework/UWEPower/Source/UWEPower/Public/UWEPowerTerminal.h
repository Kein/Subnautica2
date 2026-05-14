#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "UWEInventoryItem.h"
#include "UWETerminalBatteryData.h"
#include "UWEPowerTerminal.generated.h"

class AUWEPowerTerminal;
class UStaticMeshComponent;
class UUWEInventoryComponent;
class UUWEInventoryInteractionComponent;
class UUWEPowerTerminalComponent;
class UUWESaveComponent;

UCLASS()
class UWEPOWER_API AUWEPowerTerminal : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChargingEnabledChanged, bool, ChargingEnabled);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBatteriesChanged, AUWEPowerTerminal*, Terminal);
    
    UPROPERTY(BlueprintAssignable)
    FOnBatteriesChanged OnBatteriesChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnChargingEnabledChanged OnChargingEnabledChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UUWEInventoryInteractionComponent* InventoryInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag BatteryType;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEPowerTerminalComponent* PowerTerminalComponent;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    TArray<FUWETerminalBatteryData> BatteryData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 NumInitialEmptyBatteries;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ChargingEnabled)
    bool ChargingEnabled;
    
    UPROPERTY(EditDefaultsOnly)
    float ChargeRate;
    
    UPROPERTY(EditDefaultsOnly)
    float DrainPerChargingBattery;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWESaveComponent* SaveComponent;
    
public:
    AUWEPowerTerminal(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void UpdateBatteries();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerToggleChargingEnabled();
    
    UFUNCTION()
    void OnRep_ChargingEnabled() const;
    
    UFUNCTION()
    void OnBatteryRemoved(const FUWEInventoryItem& InventoryItem);
    
    UFUNCTION()
    void OnBatteryAdded(const FUWEInventoryItem& InventoryItem);
    
public:
    UFUNCTION(BlueprintPure)
    bool GetBatteryData(int32 Slot, FUWETerminalBatteryData& Data) const;
    
};

