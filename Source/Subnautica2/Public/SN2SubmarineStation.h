#pragma once
#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "UWEChildActor.h"
#include "AlertInstHandle.h"
#include "SN2SubmarineStation.generated.h"

class AActor;
class ASN2Submarine;
class USN2SubmarineAlert;
class UUWEAbilitySystemComponent;
class UUWEMechanicalSetComponent;
class UUWESubmarineCompartment;

UCLASS()
class SUBNAUTICA2_API ASN2SubmarineStation : public AUWEChildActor, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEAbilitySystemComponent* UWEAbilitySystemComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag SubsystemBrokenTag;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWESubmarineCompartment* SubmarineCompartment;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bAllowInteractWhenNoPower;
    
    ASN2SubmarineStation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveAlert(UPARAM(Ref) FAlertInstHandle& AlertInstHandle);
    
    UFUNCTION(BlueprintCallable)
    FAlertInstHandle PlayAlert(USN2SubmarineAlert* Alert, bool IgnorePreexistingCooldown);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSubsystemStatusChanged(bool SubsystemActive);
    
private:
    UFUNCTION()
    void OnSubsystemBrokenTagsChanged(FGameplayTag GameplayTag, int32 Stack);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSubmarineReady(ASN2Submarine* Submarine);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStationInteractableChanged(bool bInteractable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPowerStatusChanged(bool NewHasPower);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPollutionStatusChanged(bool bPolluted);
    
private:
    UFUNCTION()
    void OnPollutedStackChanged(FGameplayTag GameplayTag, int32 Stack);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnFireStatusChanged(bool bOnFire);
    
private:
    UFUNCTION()
    void OnFireStackChanged(FGameplayTag GameplayTag, int32 Stack);
    
    UFUNCTION()
    void OnEnergyRefilled(AActor* _);
    
    UFUNCTION()
    void OnEnergyEmpty(AActor* _);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnElectrocutionStatusChanged(bool bElectrocuted);
    
private:
    UFUNCTION()
    void OnElectrocutedStackChanged(FGameplayTag GameplayTag, int32 Stack);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCompartmentFloodLevelChanged(float FloodLevel);
    
protected:
    UFUNCTION()
    void NativeOnCompartmentFloodLevelChanged(float FloodLevel);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSubsystemActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsStationInteractable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOnFire() const;
    
    UFUNCTION(BlueprintPure)
    bool IsElectrocuted() const;
    
    UFUNCTION(BlueprintPure)
    bool HasPower() const;
    
    UFUNCTION(BlueprintPure)
    ASN2Submarine* GetSubmarine() const;
    
    UFUNCTION(BlueprintPure)
    UUWEMechanicalSetComponent* GetMechanicalSetComponent() const;
    

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return NULL; }
};

