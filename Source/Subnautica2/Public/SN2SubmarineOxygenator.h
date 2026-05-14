#pragma once
#include "CoreMinimal.h"
#include "SN2SubmarineStation.h"
#include "SN2SubmarineOxygenator.generated.h"

class ACharacter;
class UGameplayEffect;
class USN2EMTTorsionPointComponent;
class UStaticMeshComponent;

UCLASS(Config=Game)
class SUBNAUTICA2_API ASN2SubmarineOxygenator : public ASN2SubmarineStation {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOxygenLevelChanged, float, NewOxygenLevel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFilterEffieciencyChanged, float, NewFilterEfficiency, float, OldFilterEfficiency);
    
    UPROPERTY(BlueprintAssignable)
    FOnOxygenLevelChanged OnOxygenLevelChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnFilterEffieciencyChanged OnFilterEffieciencyChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USN2EMTTorsionPointComponent* EmtTorsionPointComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* ScreenMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_OxygenLevel)
    float OxygenLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_FilterEfficiency)
    float FilterEfficiency;
    
    UPROPERTY(BlueprintReadWrite, Config)
    float SN2FilterDegradationRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UGameplayEffect> OxygenEnergyConsumptionEffect;
    
public:
    ASN2SubmarineOxygenator(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_OxygenLevel();
    
    UFUNCTION()
    void OnRep_FilterEfficiency(float OldFilterEfficiency);
    
    UFUNCTION()
    void OnPlayerExited(ACharacter* Player);
    
    UFUNCTION()
    void OnPlayerEntered(ACharacter* Player);
    
    UFUNCTION()
    void OnApplyTorsion(float Torsion, float DeltaTime);
    
public:
    UFUNCTION(BlueprintPure)
    float GetOxygenLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetFilterEfficiency() const;
    
};

