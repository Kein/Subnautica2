#include "UWEChildActor.h"

AUWEChildActor::AUWEChildActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


AActor* AUWEChildActor::GetParentOrAttachParentActor() const {
    return NULL;
}


