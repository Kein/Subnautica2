#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "UWEAICharacter.generated.h"

class UUWEAIArchetypeComponent;
class UUWEAbilitySystemComponent;
class UUWEHealthSetComponent;
class UUWEMovementSetComponent;
class UUWEPhysicalSetComponent;
class UUWESurvivalSetComponent;

UCLASS()
class UWEAI_API AUWEAICharacter : public ACharacter, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEAbilitySystemComponent* UWEAbilitySystemComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEAIArchetypeComponent* ArchetypeComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEHealthSetComponent* HealthSetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWESurvivalSetComponent* SurvivalSetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEMovementSetComponent* MovementSetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEPhysicalSetComponent* PhysicalSetComponent;
    
    AUWEAICharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void UpdateMaxSpeed();
    
public:
    UFUNCTION(BlueprintPure)
    UUWEAbilitySystemComponent* GetASC() const;
    
    UFUNCTION(BlueprintPure)
    UUWEAIArchetypeComponent* GetAIArchetypeComponent() const;
    

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return NULL; }
};

