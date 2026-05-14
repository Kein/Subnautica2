#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SN2SubmarineFloodManager.generated.h"

class USN2SubmarineDamageComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2SubmarineFloodManager : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFloodLevelChanged, float, NewFloodLevel);
    
    UPROPERTY(BlueprintAssignable)
    FFloodLevelChanged OnFloodLevelChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_TotalFloodLevel)
    float TotalFloodLevel;
    
private:
    UPROPERTY(EditAnywhere)
    float FloodingStartPercentageThreshold;
    
    UPROPERTY(EditAnywhere)
    float SubmarineFloodedPercentageThreshold;
    
    UPROPERTY(Instanced)
    USN2SubmarineDamageComponent* DamageComponent;
    
public:
    USN2SubmarineFloodManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_TotalFloodLevel();
    
    UFUNCTION()
    void OnDamageChanged();
    
    UFUNCTION()
    void OnConnectionChanged();
    
public:
    UFUNCTION(BlueprintPure)
    float GetTotalFloodLevel() const;
    
};

