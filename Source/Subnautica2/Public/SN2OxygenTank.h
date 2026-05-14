#pragma once
#include "CoreMinimal.h"
#include "SN2BaseEquippable.h"
#include "SN2OxygenTank.generated.h"

class UUWEGameplayEffect;

UCLASS()
class SUBNAUTICA2_API ASN2OxygenTank : public ASN2BaseEquippable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated, SaveGame)
    float OxygenLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxOxygenLevel;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UUWEGameplayEffect> OxygenTankLevelGE;
    
public:
    ASN2OxygenTank(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void SetOxygenLevel(float NewLevel);
    
    UFUNCTION()
    void OnOxygenChangedCallback(float Oxygen);
    
};

