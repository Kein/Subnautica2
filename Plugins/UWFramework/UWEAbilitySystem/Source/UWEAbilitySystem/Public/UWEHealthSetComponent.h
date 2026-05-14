#pragma once
#include "CoreMinimal.h"
#include "UWEAttributeSetComponent.h"
#include "UWEHealthSetComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEABILITYSYSTEM_API UUWEHealthSetComponent : public UUWEAttributeSetComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRevivedDelegate, AActor*, SourceActor, AActor*, TargetActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnHealthChangedDelegate, AActor*, SourceActor, AActor*, TargetActor, float, OldHealth, float, NewHealth);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHealedDelegate, AActor*, SourceActor, AActor*, TargetActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiedDelegate, AActor*, SourceActor, AActor*, TargetActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDamagedDelegate, AActor*, SourceActor, AActor*, TargetActor, float, DamageAmount);
    
    UPROPERTY(BlueprintAssignable)
    FHealedDelegate OnFullyHealed;
    
    UPROPERTY(BlueprintAssignable)
    FHealedDelegate OnHealed;
    
    UPROPERTY(BlueprintAssignable)
    FDamagedDelegate OnDamaged;
    
    UPROPERTY(BlueprintAssignable)
    FDiedDelegate OnDied;
    
    UPROPERTY(BlueprintAssignable)
    FRevivedDelegate OnRevived;
    
    UPROPERTY(BlueprintAssignable)
    FOnHealthChangedDelegate OnHealthChanged;
    
    UUWEHealthSetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMaxHealth(float MaxHealth);
    
    UFUNCTION(BlueprintCallable)
    void SetHealth(float Health);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageMultiplier(float DamageMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetDamage(float Damage);
    
    UFUNCTION(BlueprintCallable)
    void RestoreHealth();
    
    UFUNCTION(BlueprintCallable)
    void Kill();
    
    UFUNCTION(BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintPure)
    float GetNormalizedHealth() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintPure)
    float GetHealth() const;
    
};

