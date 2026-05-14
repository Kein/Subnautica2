#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "SN2AbilityTask_ScanHoverActor.generated.h"

class AActor;
class ASN2PlayerCharacter;
class UGameplayAbility;
class USN2AbilityTask_ScanHoverActor;
class UUWEScanData;
class UUWEScannedActorsComponent;

UCLASS(Config=Engine)
class SUBNAUTICA2_API USN2AbilityTask_ScanHoverActor : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCompletedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCancelledDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FCompletedDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FCancelledDelegate OnCancelled;
    
    UPROPERTY(Config)
    float ScanPeriod;
    
protected:
    UPROPERTY()
    TWeakObjectPtr<AActor> HoverTarget;
    
    UPROPERTY()
    UUWEScanData* ScanData;
    
    UPROPERTY()
    TWeakObjectPtr<ASN2PlayerCharacter> Player;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UUWEScannedActorsComponent> ScannerToolComponent;
    
    UPROPERTY()
    FTimerHandle ScanTimerHandle;
    
public:
    USN2AbilityTask_ScanHoverActor();

protected:
    UFUNCTION()
    void StopTask(bool bCancelled);
    
public:
    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_ScanHoverActor* ScanHoverActor(UGameplayAbility* OwningAbility);
    
};

