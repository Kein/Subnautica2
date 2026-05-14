#pragma once
#include "CoreMinimal.h"
#include "UWEPowerNodeComponent.h"
#include "UWEPoweredApplianceComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPOWER_API UUWEPoweredApplianceComponent : public UUWEPowerNodeComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPoweredStateChanged, bool, NewIsPowered);
    
    UPROPERTY(BlueprintAssignable)
    FOnPoweredStateChanged OnPoweredStateChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OverridePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ContinuousPowerDrain;
    
    UPROPERTY(Transient)
    bool IsOn;
    
    UPROPERTY(ReplicatedUsing=OnRep_IsPowered)
    bool IsPowered;
    
public:
    UUWEPoweredApplianceComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryConsumePowerInstant(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void ToggleIsOn();
    
    UFUNCTION()
    void SetIsPowered(bool Powered);
    
    UFUNCTION(BlueprintCallable)
    void SetIsOn(bool On);
    
    UFUNCTION(BlueprintCallable)
    void SetContinuousPowerDrain(const float PowerDrain);
    
protected:
    UFUNCTION()
    void OnRep_IsPowered();
    
public:
    UFUNCTION(BlueprintPure)
    bool GetIsPowered() const;
    
    UFUNCTION(BlueprintPure)
    float GetContinuousPowerDrain() const;
    
    UFUNCTION(BlueprintPure)
    bool CanConsumePowerInstant(float Amount) const;
    
};

