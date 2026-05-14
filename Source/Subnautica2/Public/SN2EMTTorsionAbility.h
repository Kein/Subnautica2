#pragma once
#include "CoreMinimal.h"
#include "AbilityInfo.h"
#include "SN2TargetedAbility.h"
#include "SN2EMTTorsionAbility.generated.h"

UCLASS(Config=Engine)
class SUBNAUTICA2_API USN2EMTTorsionAbility : public USN2TargetedAbility, public IAbilityInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    float SN2EMTTorsionInteractDistance;
    
    UPROPERTY(Config)
    float SN2EMTTorsionTargetLossAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float Multiplier;
    
    UPROPERTY(EditDefaultsOnly)
    FString PrimaryText;
    
public:
    USN2EMTTorsionAbility();

private:
    UFUNCTION()
    void OnTargetLost();
    
    UFUNCTION()
    void OnEnergyDepleted();
    
    UFUNCTION()
    void OnAbilityActiveTick(float DeltaTime);
    

    // Fix for true pure virtual functions not being implemented
};

