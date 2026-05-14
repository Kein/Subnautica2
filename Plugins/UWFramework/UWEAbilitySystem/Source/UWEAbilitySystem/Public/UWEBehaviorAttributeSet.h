#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "UWEBaseAttributeSet.h"
#include "UWEBehaviorAttributeSet.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UWEABILITYSYSTEM_API UUWEBehaviorAttributeSet : public UUWEBaseAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    float UWELowTemperThresholdPct;
    
    UPROPERTY(Config)
    float UWEHighTemperThresholdPct;
    
    UPROPERTY(Config)
    float UWELowStaminaThresholdPct;
    
    UPROPERTY(Config)
    float UWEHighStaminaThresholdPct;
    
    UPROPERTY(Config)
    float UWELowInfectionThresholdPct;
    
    UPROPERTY(Config)
    float UWEHighInfectionThresholdPct;
    
private:
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_Temper, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Temper;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_MaxTemper, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxTemper;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_MaxReachedTemper, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxReachedTemper;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_Stamina, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Stamina;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_MaxStamina, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxStamina;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_Infection, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Infection;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_MaxInfection, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxInfection;
    
public:
    UUWEBehaviorAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_Temper(const FGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_Stamina(const FGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_MaxTemper(const FGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_MaxStamina(const FGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_MaxReachedTemper(const FGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_MaxInfection(const FGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_Infection(const FGameplayAttributeData& OldValue);
    
};

