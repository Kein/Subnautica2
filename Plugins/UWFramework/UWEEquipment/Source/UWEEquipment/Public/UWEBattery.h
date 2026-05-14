#pragma once
#include "CoreMinimal.h"
#include "UWEBaseItem.h"
#include "UWEBattery.generated.h"

class UUWESaveComponent;

UCLASS()
class UWEEQUIPMENT_API AUWEBattery : public AUWEBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated, SaveGame)
    float EnergyLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated, SaveGame)
    float MaxEnergyLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWESaveComponent* SaveComponent;
    
    AUWEBattery(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetEnergyLevel(float InEnergyLevel);
    
    UFUNCTION(BlueprintPure)
    float GetEnergyPercent() const;
    
};

