#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWEGameplayActor.h"
#include "SN2BlightNodeDamagePoint.generated.h"

class AActor;
class ASN2BlightNodeDamagePoint;
class UUWESaveComponent;

UCLASS()
class SUBNAUTICA2_API ASN2BlightNodeDamagePoint : public AUWEGameplayActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInvincibilityChanged, bool, bInvincible);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBroken, ASN2BlightNodeDamagePoint*, DamagePoint, const AActor*, Instigator);
    
    UPROPERTY(BlueprintAssignable)
    FOnBroken OnBroken;
    
    UPROPERTY(BlueprintAssignable)
    FOnInvincibilityChanged OnInvincibilityChanged;
    
private:
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_Broken)
    bool Broken;
    
    UPROPERTY(EditAnywhere, Instanced)
    UUWESaveComponent* SaveComponent;
    
public:
    ASN2BlightNodeDamagePoint(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintImplementableEvent)
    void SetInfectionCenterPoint(FTransform CenterPoint);
    
private:
    UFUNCTION()
    void OnRep_Broken();
    
protected:
    UFUNCTION()
    void OnInvincibilityTagChanged(FGameplayTag GameplayTag, int32 NewCount);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsNodeBroken() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInvincible() const;
    
};

