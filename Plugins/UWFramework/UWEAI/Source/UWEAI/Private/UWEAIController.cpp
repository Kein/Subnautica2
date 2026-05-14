#include "UWEAIController.h"
#include "UWEAIActionComponent.h"
#include "UWEAIDecisionComponent.h"
#include "UWEAILocomotionComponent.h"
#include "UWEAIPerceptionComponent.h"

AUWEAIController::AUWEAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_PathFollowingComponent = GetClass()->FindPropertyByName("PathFollowingComponent");
    (*p_PathFollowingComponent->ContainerPtrToValuePtr<UPathFollowingComponent*>(this)) = NULL;
    this->AIPerceptionComponent = CreateDefaultSubobject<UUWEAIPerceptionComponent>(TEXT("PerceptionComponent"));
    this->AIDecisionComponent = CreateDefaultSubobject<UUWEAIDecisionComponent>(TEXT("DecisionComponent"));
    this->AIActionComponent = CreateDefaultSubobject<UUWEAIActionComponent>(TEXT("ActionComponent"));
    this->AILocomotionComponent = CreateDefaultSubobject<UUWEAILocomotionComponent>(TEXT("LocomotionComponent"));
    this->AIArchetypeComponent = NULL;
    this->CurrentLODLevel = EUWEAILOD::Max;
}

void AUWEAIController::OnProfileChanged() {
}

void AUWEAIController::InitializeAIComponents() {
}

UUWEAIPerceptionComponent* AUWEAIController::GetAIPerception() const {
    return NULL;
}

UUWEAILocomotionComponent* AUWEAIController::GetAILocomotion() const {
    return NULL;
}

UUWEAIDecisionComponent* AUWEAIController::GetAIDecision() const {
    return NULL;
}

UUWEAIArchetypeComponent* AUWEAIController::GetAIArchetype() const {
    return NULL;
}

UUWEAIActionComponent* AUWEAIController::GetAIAction() const {
    return NULL;
}


