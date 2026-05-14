#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameplayTagContainer.h"
#include "UWESubmarineCompartment.generated.h"

class AActor;
class AUWECompartmentConnector;
class ULightComponent;
class UUWEMechanicalSetComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESUBMARINE_API UUWESubmarineCompartment : public UBoxComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFloodLevelChanged, float, NewFloodLevel);
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag SubsystemTag;
    
    UPROPERTY()
    TArray<AUWECompartmentConnector*> Connectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideLeaking;
    
    UPROPERTY(BlueprintAssignable)
    FFloodLevelChanged OnFloodLevelChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    double CompartmentVolume;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    double WaterVolume;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float WaterThroughPut;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_FloodLevel)
    float FloodLevel;
    
private:
    UPROPERTY(EditAnywhere)
    float BaseLightIntensity;
    
    UPROPERTY(Instanced)
    UUWEMechanicalSetComponent* MechanicalComponent;
    
    UPROPERTY(Instanced)
    TArray<ULightComponent*> Lights;
    
    UPROPERTY(Instanced)
    TArray<ULightComponent*> SubmergedLights;
    
    UPROPERTY()
    AActor* WaterVolumeActor;
    
public:
    UUWESubmarineCompartment(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetWaterVolume(float InWaterVolume);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetFloodLevel(float InFloodLevel);
    
private:
    UFUNCTION()
    void OnRep_FloodLevel();
    
    UFUNCTION()
    void OnEnergyRefilled(AActor* Who);
    
    UFUNCTION()
    void OnEnergyEmpty(AActor* Who);
    
public:
    UFUNCTION(BlueprintPure)
    float GetWaterVolume() const;
    
    UFUNCTION(BlueprintPure)
    float GetFloodLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetCompartmentVolume() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    float AddWaterVolume(float InWaterVolume);
    
};

