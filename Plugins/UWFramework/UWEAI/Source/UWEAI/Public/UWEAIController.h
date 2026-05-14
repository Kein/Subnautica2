#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "EUWEAILOD.h"
#include "UWEAIController.generated.h"

class UUWEAIActionComponent;
class UUWEAIArchetypeComponent;
class UUWEAIDecisionComponent;
class UUWEAILocomotionComponent;
class UUWEAIPerceptionComponent;

UCLASS()
class UWEAI_API AUWEAIController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEAIPerceptionComponent* AIPerceptionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEAIDecisionComponent* AIDecisionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEAIActionComponent* AIActionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEAILocomotionComponent* AILocomotionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEAIArchetypeComponent* AIArchetypeComponent;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EUWEAILOD::Type> CurrentLODLevel;
    
public:
    AUWEAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnProfileChanged();
    
    UFUNCTION()
    void InitializeAIComponents();
    
    UFUNCTION(BlueprintPure)
    UUWEAIPerceptionComponent* GetAIPerception() const;
    
    UFUNCTION(BlueprintPure)
    UUWEAILocomotionComponent* GetAILocomotion() const;
    
    UFUNCTION(BlueprintPure)
    UUWEAIDecisionComponent* GetAIDecision() const;
    
    UFUNCTION(BlueprintPure)
    UUWEAIArchetypeComponent* GetAIArchetype() const;
    
    UFUNCTION(BlueprintPure)
    UUWEAIActionComponent* GetAIAction() const;
    
};

