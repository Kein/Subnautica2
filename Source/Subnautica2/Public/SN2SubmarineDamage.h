#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESubmarineDamageLocation.h"
#include "SN2SubmarineDamage.generated.h"

class ASN2SubmarineDamage;
class UStaticMeshComponent;
class UUWEAbilitySystemComponent;
class UUWEHealthSetComponent;
class UUWESubmarineCompartment;

UCLASS(Config=Game)
class SUBNAUTICA2_API ASN2SubmarineDamage : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDamageChanged, const ASN2SubmarineDamage*, DamageActor, float, Amount);
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEHealthSetComponent* HealthSetComponent;
    
    UPROPERTY(BlueprintAssignable)
    FDamageChanged OnDamageChanged;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    TWeakObjectPtr<ASN2SubmarineDamage> ConnectedDamageActor;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UUWESubmarineCompartment> Compartment;
    
    UPROPERTY(Config)
    float SN2DamagePointFloodThreshold;
    
    UPROPERTY(Config)
    float SN2WaterThroughPutPerDamage;
    
    UPROPERTY(Config)
    float SN2SubmarineMaximumHealthDamage;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEAbilitySystemComponent* UWEAbilitySystemComponent;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_DamageLocation)
    ESubmarineDamageLocation DamageLocation;
    
public:
    ASN2SubmarineDamage(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_DamageLocation();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDamageLocation();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsBreached() const;
    
    UFUNCTION(BlueprintPure)
    float GetWaterThroughPut() const;
    
    UFUNCTION(BlueprintPure)
    ESubmarineDamageLocation GetDamageLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetDamageAmount() const;
    
    UFUNCTION(BlueprintCallable)
    void AddDamage(float Damage);
    
};

