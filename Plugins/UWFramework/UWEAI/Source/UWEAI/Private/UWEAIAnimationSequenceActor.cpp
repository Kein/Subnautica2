#include "UWEAIAnimationSequenceActor.h"
#include "UWESweepTestEnforceComponent.h"

AUWEAIAnimationSequenceActor::AUWEAIAnimationSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SweepTestEnforceComponent = CreateDefaultSubobject<UUWESweepTestEnforceComponent>(TEXT("SweepTestEnforceComponent"));
    this->ActorBindingTag = TEXT("Actor");
}


