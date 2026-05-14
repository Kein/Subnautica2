#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "SN2ComputerCore.generated.h"

class UUWEPoweredApplianceComponent;
class UUWEStoryGoal;

UCLASS()
class SUBNAUTICA2_API ASN2ComputerCore : public AActor, public IInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UUWEStoryGoal* ReadyGoal;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEPoweredApplianceComponent* PoweredApplianceComponent;
    
public:
    ASN2ComputerCore(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    void NotifyReadyGoalsSet(UUWEStoryGoal* Goal);
    
    UFUNCTION(BlueprintNativeEvent)
    void NotifyReadyGoalsClear();
    

    // Fix for true pure virtual functions not being implemented
};

