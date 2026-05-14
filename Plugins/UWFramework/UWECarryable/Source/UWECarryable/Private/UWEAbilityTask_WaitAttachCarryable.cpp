#include "UWEAbilityTask_WaitAttachCarryable.h"
#include "Net/UnrealNetwork.h"

UUWEAbilityTask_WaitAttachCarryable::UUWEAbilityTask_WaitAttachCarryable() {
    this->TimeAttached = -1.00f;
    this->TransitionAmount = 0.00f;
}

UUWEAbilityTask_WaitAttachCarryable* UUWEAbilityTask_WaitAttachCarryable::WaitAttachCarryable(UGameplayAbility* OwningAbility, AActor* InCarryableActor, USceneComponent* InParentComponent, FName InSocket, FName TaskInstanceName, bool UseTransition) {
    return NULL;
}

void UUWEAbilityTask_WaitAttachCarryable::OnRep_AttachmentInfo() {
}

void UUWEAbilityTask_WaitAttachCarryable::OnDied(AActor* SourceActor, AActor* TargetActor) {
}

AActor* UUWEAbilityTask_WaitAttachCarryable::GetCarryableActor() const {
    return NULL;
}

void UUWEAbilityTask_WaitAttachCarryable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEAbilityTask_WaitAttachCarryable, AttachmentInfo);
}


