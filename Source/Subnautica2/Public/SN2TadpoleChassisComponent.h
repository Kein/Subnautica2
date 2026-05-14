#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "SN2TadpoleChassisComponent.generated.h"

class AActor;
class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2TadpoleChassisComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSN2ChassisPowered);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSN2ChassisHealthChanged, float, NewHealthFraction);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSN2ChassisDetached);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSN2ChassisAttached);
    
    UPROPERTY(BlueprintAssignable)
    FSN2ChassisHealthChanged OnHealthFractionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSN2ChassisPowered OnPowered;
    
    UPROPERTY(BlueprintAssignable)
    FSN2ChassisAttached OnAttachedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSN2ChassisDetached OnDetachedDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere, ReplicatedUsing=OnRep_HealthFraction)
    float HealthFraction;
    
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    USN2TadpoleChassisComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_HealthFraction();
    
    UFUNCTION()
    void OnHealthChanged(AActor* SourceActor, AActor* TargetActor, float OldHealth, float NewHealth);
    
protected:
    UFUNCTION()
    void OnEnergyRefilled(AActor* Who);
    
private:
    UFUNCTION()
    void OnEnergyEmpty(AActor* Who);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPowered() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAttachedToTadpole() const;
    

    // Fix for true pure virtual functions not being implemented
};

