#pragma once
#include "CoreMinimal.h"
#include "UWEBaseAttributeSet.h"
#include "UWEGameplayAttributeData.h"
#include "UWEMechanicalAttributeSet.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UWEABILITYSYSTEM_API UUWEMechanicalAttributeSet : public UUWEBaseAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    float UWELowEnergyThresholdPct;
    
    UPROPERTY(Config)
    float UWEHighEnergyThresholdPct;
    
private:
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_Energy, meta=(AllowPrivateAccess=true))
    FUWEGameplayAttributeData Energy;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_MaxEnergy, meta=(AllowPrivateAccess=true))
    FUWEGameplayAttributeData MaxEnergy;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_EnergyModifier, meta=(AllowPrivateAccess=true))
    FUWEGameplayAttributeData EnergyModifier;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CrushDepth, meta=(AllowPrivateAccess=true))
    FUWEGameplayAttributeData CrushDepth;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ScanSpeedScalar, meta=(AllowPrivateAccess=true))
    FUWEGameplayAttributeData ScanSpeedScalar;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_RepairSpeedScalar, meta=(AllowPrivateAccess=true))
    FUWEGameplayAttributeData RepairSpeedScalar;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    FUWEGameplayAttributeData EnergyConsumption;
    
public:
    UUWEMechanicalAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_ScanSpeedScalar(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_RepairSpeedScalar(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_MaxEnergy(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_EnergyModifier(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_Energy(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_CrushDepth(const FUWEGameplayAttributeData& OldValue);
    
};

