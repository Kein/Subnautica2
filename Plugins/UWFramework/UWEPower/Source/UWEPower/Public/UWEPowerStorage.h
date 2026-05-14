#pragma once
#include "CoreMinimal.h"
#include "UWEPowerNodeComponent.h"
#include "UWEPowerStorage.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPOWER_API UUWEPowerStorage : public UUWEPowerNodeComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUseReservePowerChanged, bool, UseReservePower);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCurrentChargeChanged);
    
    UPROPERTY(BlueprintAssignable)
    FOnUseReservePowerChanged OnUseReservePowerChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnCurrentChargeChanged OnCurrentChargeChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_UseReservePower)
    bool UseReservePower;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxCharge;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CurrentCharge)
    float CurrentCharge;
    
    UPROPERTY(EditDefaultsOnly)
    float ChargeRateLimit;
    
public:
    UUWEPowerStorage(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerToggleUseReservePower();
    
    UFUNCTION()
    void OnRep_UseReservePower() const;
    
    UFUNCTION()
    void OnRep_CurrentCharge();
    
    UFUNCTION()
    void CurrentChargeChanged(float Charge);
    
};

