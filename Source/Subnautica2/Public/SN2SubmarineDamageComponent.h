#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "ESubmarineDamageLocation.h"
#include "SN2CollisionDamageComponent.h"
#include "SubsystemDamage.h"
#include "Templates/SubclassOf.h"
#include "SN2SubmarineDamageComponent.generated.h"

class ASN2SubmarineDamage;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2SubmarineDamageComponent : public USN2CollisionDamageComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDamageTaken, float, Damage);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDamageRepaired);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDamageChanged);
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ASN2SubmarineDamage> DamageActorClass;
    
    UPROPERTY(BlueprintAssignable)
    FDamageChanged OnDamageChanged;
    
    UPROPERTY(BlueprintAssignable)
    FDamageTaken OnDamageTaken;
    
    UPROPERTY(BlueprintAssignable)
    FDamageRepaired OnDamageRepaired;
    
    UPROPERTY(BlueprintReadOnly)
    float TimeLastDamageTaken;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRep_SubSystemDamage)
    TArray<FSubsystemDamage> SubsystemDamage;
    
public:
    USN2SubmarineDamageComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_SubSystemDamage();
    
    UFUNCTION()
    void OnDamageActorChanged(const ASN2SubmarineDamage* DamageActor, float Amount);
    
public:
    UFUNCTION(BlueprintPure)
    float GetSubsystemDamagePercent(FGameplayTag SubsystemTag) const;
    
    UFUNCTION(BlueprintPure)
    float GetSubSystemDamage(FGameplayTag SubsystemTag) const;
    
    UFUNCTION(BlueprintCallable)
    void DealDamage(float Damage, const FHitResult& Hit, ESubmarineDamageLocation OverrideLocation);
    
};

