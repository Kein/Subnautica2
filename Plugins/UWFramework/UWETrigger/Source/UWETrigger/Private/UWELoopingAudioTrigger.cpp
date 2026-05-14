#include "UWELoopingAudioTrigger.h"
#include "Components/BoxComponent.h"

AUWELoopingAudioTrigger::AUWELoopingAudioTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
}


