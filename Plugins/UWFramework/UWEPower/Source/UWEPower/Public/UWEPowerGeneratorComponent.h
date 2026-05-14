#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UWEPowerNodeComponent.h"
#include "UWEPowerGeneratorComponent.generated.h"

class UUWEPowerGeneratorSimulation;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Engine, meta=(BlueprintSpawnableComponent))
class UWEPOWER_API UUWEPowerGeneratorComponent : public UUWEPowerNodeComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBasePowerGenerationChanged, float, NewBasePowerGeneration);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FOnBasePowerGenerationChanged OnBasePowerGenerationChanged;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, ReplicatedUsing=OnRep_BasePowerGeneration)
    float BasePowerGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UUWEPowerGeneratorSimulation> PowerSimulationClass;
    
public:
    UUWEPowerGeneratorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetPowerGeneration(float PowerGeneration);
    
protected:
    UFUNCTION()
    void OnRep_BasePowerGeneration();
    
public:
    UFUNCTION(BlueprintPure)
    float GetCurrentPowerGeneration() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float CalculatePowerGenerationScale() const;
    
};

