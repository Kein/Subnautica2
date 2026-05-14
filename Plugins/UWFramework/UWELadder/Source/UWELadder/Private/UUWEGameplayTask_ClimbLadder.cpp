#include "UUWEGameplayTask_ClimbLadder.h"
#include "Net/UnrealNetwork.h"

UUUWEGameplayTask_ClimbLadder::UUUWEGameplayTask_ClimbLadder(const FObjectInitializer& Init) : Super(Init) {}

UUUWEGameplayTask_ClimbLadder* UUUWEGameplayTask_ClimbLadder::GetTickingClimbingTask(const AActor* Actor) {
    return NULL;
}

UUUWEGameplayTask_ClimbLadder* UUUWEGameplayTask_ClimbLadder::ClimbLadder(AActor* ClimbingActor, UUWELadderComponent* Ladder, float Speed) {
    return NULL;
}

void UUUWEGameplayTask_ClimbLadder::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUUWEGameplayTask_ClimbLadder, Data);
}


