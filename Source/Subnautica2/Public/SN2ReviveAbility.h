#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SN2TargetedAbility.h"
#include "SN2ReviveAbility.generated.h"

class AActor;

UCLASS(Config=Engine)
class SUBNAUTICA2_API USN2ReviveAbility : public USN2TargetedAbility {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    float SN2ReviveDistance;
    
    UPROPERTY(Config)
    float SN2ReviveTargetLossAngle;
    
    UPROPERTY(Config)
    float SN2ReviveDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag ReviveCueTag;
    
protected:
    UPROPERTY()
    TWeakObjectPtr<AActor> ReviveTarget;
    
public:
    USN2ReviveAbility();

protected:
    UFUNCTION()
    void OnTick(float DeltaTime);
    
    UFUNCTION()
    void OnTargetLost();
    
public:
    UFUNCTION(BlueprintPure)
    static float GetReviveDuration();
    
};

