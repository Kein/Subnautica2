#pragma once
#include "CoreMinimal.h"
#include "UWEAttributeSetComponent.h"
#include "UWEBehaviorSetComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEABILITYSYSTEM_API UUWEBehaviorSetComponent : public UUWEAttributeSetComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTemperChangedDelegate, float, Temper);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStaminaChangedDelegate, float, Stamina);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInfectionChangedDelegate, float, Infection);
    
    UPROPERTY(BlueprintAssignable)
    FTemperChangedDelegate OnTemperChanged;
    
    UPROPERTY(BlueprintAssignable)
    FStaminaChangedDelegate OnStaminaChanged;
    
    UPROPERTY(BlueprintAssignable)
    FInfectionChangedDelegate OnInfectionChanged;
    
    UUWEBehaviorSetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTemper(float Temper);
    
    UFUNCTION(BlueprintCallable)
    void SetStamina(float Stamina);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxTemper(float MaxTemper);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxStamina(float MaxStamina);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxInfection(float MaxInfection);
    
    UFUNCTION(BlueprintCallable)
    void SetInfection(float Infection);
    
    UFUNCTION(BlueprintPure)
    float GetTemper() const;
    
    UFUNCTION(BlueprintPure)
    float GetStamina() const;
    
    UFUNCTION(BlueprintPure)
    float GetNormalizedTemper() const;
    
    UFUNCTION(BlueprintPure)
    float GetNormalizedStamina() const;
    
    UFUNCTION(BlueprintPure)
    float GetNormalizedInfection() const;
    
    UFUNCTION(BlueprintPure)
    float GetInfection() const;
    
};

