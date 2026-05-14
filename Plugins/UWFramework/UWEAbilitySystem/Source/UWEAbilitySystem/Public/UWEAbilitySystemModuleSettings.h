#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEAbilitySystemModuleSettings.generated.h"

class UGameplayEffect;

UCLASS(DefaultConfig, Config=UWEAbilitySystem)
class UWEABILITYSYSTEM_API UUWEAbilitySystemModuleSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> DynamicTagGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetEnergyGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetEnergyModifierGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetMaxEnergyGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetEnergyConsumptionGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> AddEnergyGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetRotationSpeedMultiplierGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetHealthGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetDamageGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetDamageOverTimeGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetMaxHealthGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetDamageMultiplierGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetMaxOxygenGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetOxygenGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SwimSpeedBuffGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetSwimSpeedGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetWalkSpeedGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetTemperGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetMaxTemperGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetStaminaGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetMaxStaminaGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetInfectionGameplayEffect;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> SetMaxInfectionGameplayEffect;
    
    UUWEAbilitySystemModuleSettings();

};

