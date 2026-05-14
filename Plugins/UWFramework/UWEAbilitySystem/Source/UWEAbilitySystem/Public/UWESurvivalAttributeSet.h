#pragma once
#include "CoreMinimal.h"
#include "UWEBaseAttributeSet.h"
#include "UWEGameplayAttributeData.h"
#include "UWESurvivalAttributeSet.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UWEABILITYSYSTEM_API UUWESurvivalAttributeSet : public UUWEBaseAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Oxygen)
    FUWEGameplayAttributeData Oxygen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_MaxOxygen)
    FUWEGameplayAttributeData MaxOxygen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Food)
    FUWEGameplayAttributeData Food;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_MaxFood)
    FUWEGameplayAttributeData MaxFood;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_StarvationRateScalar)
    FUWEGameplayAttributeData StarvationRateScalar;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_Water)
    FUWEGameplayAttributeData Water;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_MaxWater)
    FUWEGameplayAttributeData MaxWater;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_DehydrationRateScalar)
    FUWEGameplayAttributeData DehydrationRateScalar;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_Water)
    FUWEGameplayAttributeData HydrationRateScalar;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_NominalDepthMeters)
    FUWEGameplayAttributeData NominalDepthMeters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_SuffocationRateScalar)
    FUWEGameplayAttributeData SuffocationRateScalar;
    
    UPROPERTY(Config)
    float UWELowOxygenThresholdPct;
    
    UPROPERTY(Config)
    float UWEHighOxygenThresholdPct;
    
    UPROPERTY(Config)
    float UWELowFoodThresholdPct;
    
    UPROPERTY(Config)
    float UWEHighFoodThresholdPct;
    
    UPROPERTY(Config)
    float UWELowWaterThresholdPct;
    
    UPROPERTY(Config)
    float UWEHighWaterThresholdPct;
    
    UUWESurvivalAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_Water(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_SuffocationRateScalar(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_StarvationRateScalar(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_Oxygen(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_NominalDepthMeters(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_MaxWater(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_MaxOxygen(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_MaxFood(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_HydrationRateScalar(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_Food(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_DehydrationRateScalar(const FUWEGameplayAttributeData& OldValue);
    
};

