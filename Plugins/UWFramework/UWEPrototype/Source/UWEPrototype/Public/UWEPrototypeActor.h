#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWEPrototypeActor.generated.h"

class UUWEAbilitySystemComponent;
class UUWEHealthSetComponent;
class UUWEMechanicalSetComponent;
class UUWEMovementSetComponent;
class UUWEPhysicalSetComponent;
class UUWESurvivalSetComponent;

UCLASS()
class UWEPROTOTYPE_API AUWEPrototypeActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEAbilitySystemComponent* UWEAbilitySystemComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEHealthSetComponent* HealthSetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEMechanicalSetComponent* MechanicalSetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEMovementSetComponent* MovementSetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWESurvivalSetComponent* SurvivalSetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEPhysicalSetComponent* PhysicalSetComponent;
    
public:
    AUWEPrototypeActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void UpdateMaxSpeed();
    
};

