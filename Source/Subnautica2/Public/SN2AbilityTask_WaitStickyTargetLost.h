#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "SN2AbilityTask_WaitStickyTargetLost.generated.h"

class ASN2PlayerCharacter;
class UGameplayAbility;
class USN2AbilityTask_WaitStickyTargetLost;
class USceneComponent;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_WaitStickyTargetLost : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTargetLostDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FTargetLostDelegate OnTargetLost;
    
protected:
    UPROPERTY(Export)
    TWeakObjectPtr<USceneComponent> ScanTarget;
    
    UPROPERTY()
    TWeakObjectPtr<ASN2PlayerCharacter> Player;
    
    UPROPERTY(Transient)
    float OutOfRangeTimeLimit;
    
    UPROPERTY(Transient)
    float OutOfFOVTimeLimit;
    
    UPROPERTY(Transient)
    float OutOfLOSTimeLimit;
    
public:
    USN2AbilityTask_WaitStickyTargetLost();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_WaitStickyTargetLost* WaitStickyTargetLost(UGameplayAbility* OwningAbility, USceneComponent* InScanTarget, float InTargetLossAngle, float InMaxRange, FVector HitLocation, bool CheckLOS, float NewOutOfRangeTimeLimit, float NewOutOfFOVTimeLimit, float NewOutOfLOSTimeLimit);
    
};

