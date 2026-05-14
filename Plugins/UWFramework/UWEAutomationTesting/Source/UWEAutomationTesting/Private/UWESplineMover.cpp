#include "UWESplineMover.h"
#include "Net/UnrealNetwork.h"

AUWESplineMover::AUWESplineMover(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetActorCam = NULL;
    this->TargetPlayerController = NULL;
    this->VideoTourPath = NULL;
    this->bPlaying = false;
    this->bPaused = false;
    this->PathT = 0.00f;
}

void AUWESplineMover::StopMoving() {
}

void AUWESplineMover::StartMovingPlayerController(APlayerController* InTargetPlayerController, AUWEVideoTourPath* Path) {
}

void AUWESplineMover::StartMovingActor(AActor* InTargetActor, AUWEVideoTourPath* Path) {
}

void AUWESplineMover::ServerStopMoving_Implementation() {
}
bool AUWESplineMover::ServerStopMoving_Validate() {
    return true;
}

void AUWESplineMover::ServerStartMovingFromActor_Implementation(AActor* InTargetActorCam, AUWEVideoTourPath* Path) {
}
bool AUWESplineMover::ServerStartMovingFromActor_Validate(AActor* InTargetActorCam, AUWEVideoTourPath* Path) {
    return true;
}

void AUWESplineMover::ServerPauseMoving_Implementation() {
}
bool AUWESplineMover::ServerPauseMoving_Validate() {
    return true;
}

void AUWESplineMover::PauseMoving() {
}

void AUWESplineMover::MoveTargetActor() {
}

void AUWESplineMover::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWESplineMover, TargetActorCam);
    DOREPLIFETIME(AUWESplineMover, TargetPlayerController);
    DOREPLIFETIME(AUWESplineMover, VideoTourPath);
    DOREPLIFETIME(AUWESplineMover, bPlaying);
    DOREPLIFETIME(AUWESplineMover, bPaused);
    DOREPLIFETIME(AUWESplineMover, PathT);
}


