#pragma once
#include "CoreMinimal.h"
#include "UWEBaseAttributeSet.h"
#include "UWEGameplayAttributeData.h"
#include "UWEHealthAttributeSet.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UWEABILITYSYSTEM_API UUWEHealthAttributeSet : public UUWEBaseAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    float UWELowHealthThresholdPct;
    
    UPROPERTY(Config)
    float UWEHighHealthThresholdPct;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_Health)
    FUWEGameplayAttributeData Health;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_MaxHealth)
    FUWEGameplayAttributeData MaxHealth;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_DamageMultiplier)
    FUWEGameplayAttributeData DamageMultiplier;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Radiation)
    FUWEGameplayAttributeData Radiation;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_RadiationAbsorbed)
    FUWEGameplayAttributeData RadiationAbsorbed;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_RadiationThreshold)
    FUWEGameplayAttributeData RadiationThreshold;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_DamageMultiplierRadiation)
    FUWEGameplayAttributeData DamageMultiplierRadiation;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_DamageMultiplierElectrical)
    FUWEGameplayAttributeData DamageMultiplierElectrical;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_DamageMultiplierPhysical)
    FUWEGameplayAttributeData DamageMultiplierPhysical;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Temperature)
    FUWEGameplayAttributeData Temperature;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_InternalTemperature)
    FUWEGameplayAttributeData InternalTemperature;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_HeatAccumulationRate)
    FUWEGameplayAttributeData HeatAccumulationRate;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ColdAccumulationRate)
    FUWEGameplayAttributeData ColdAccumulationRate;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_MoveTowardsSafeTemperatureRate)
    FUWEGameplayAttributeData MoveTowardsSafeTemperatureRate;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_DamageMultiplierCold)
    FUWEGameplayAttributeData DamageMultiplierCold;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_DamageMultiplierHeat)
    FUWEGameplayAttributeData DamageMultiplierHeat;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_TemperatureDamageThresholdColdLow)
    FUWEGameplayAttributeData TemperatureDamageThresholdColdLow;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_TemperatureDamageThresholdColdMedium)
    FUWEGameplayAttributeData TemperatureDamageThresholdColdMedium;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_TemperatureDamageThresholdColdHigh)
    FUWEGameplayAttributeData TemperatureDamageThresholdColdHigh;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_TemperatureDamageThresholdHotLow)
    FUWEGameplayAttributeData TemperatureDamageThresholdHotLow;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_TemperatureDamageThresholdHotMedium)
    FUWEGameplayAttributeData TemperatureDamageThresholdHotMedium;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_TemperatureDamageThresholdHotHigh)
    FUWEGameplayAttributeData TemperatureDamageThresholdHotHigh;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_BiomodStability)
    FUWEGameplayAttributeData BiomodStability;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_MaxBiomodStability)
    FUWEGameplayAttributeData MaxBiomodStability;
    
    UPROPERTY(BlueprintReadOnly)
    FUWEGameplayAttributeData Healing;
    
    UPROPERTY(BlueprintReadOnly)
    FUWEGameplayAttributeData Damage;
    
    UUWEHealthAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_TemperatureDamageThresholdHotMedium(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_TemperatureDamageThresholdHotLow(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_TemperatureDamageThresholdHotHigh(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_TemperatureDamageThresholdColdMedium(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_TemperatureDamageThresholdColdLow(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_TemperatureDamageThresholdColdHigh(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_Temperature(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_RadiationThreshold(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_RadiationAbsorbed(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_Radiation(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_MoveTowardsSafeTemperatureRate(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_MaxHealth(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_MaxBiomodStability(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_InternalTemperature(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_HeatAccumulationRate(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_Health(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_DamageMultiplierRadiation(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_DamageMultiplierPhysical(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_DamageMultiplierHeat(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_DamageMultiplierElectrical(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_DamageMultiplierCold(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_DamageMultiplier(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_ColdAccumulationRate(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_BiomodStability(const FUWEGameplayAttributeData& OldValue);
    
};

