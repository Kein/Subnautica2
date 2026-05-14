#include "UWESerializedLevelSequenceActor.h"
#include "UWESaveComponent.h"

AUWESerializedLevelSequenceActor::AUWESerializedLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicatePlayback = true;
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->PlaybackTime = 0.00f;
}

void AUWESerializedLevelSequenceActor::OnSequencePlay() {
}

void AUWESerializedLevelSequenceActor::OnSequenceFinished() {
}

void AUWESerializedLevelSequenceActor::OnLocalClientReady() {
}


