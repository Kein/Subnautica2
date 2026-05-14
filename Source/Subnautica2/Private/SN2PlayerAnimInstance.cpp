#include "SN2PlayerAnimInstance.h"
#include "Templates/SubclassOf.h"

USN2PlayerAnimInstance::USN2PlayerAnimInstance() {
}

void USN2PlayerAnimInstance::VisualLog(const FString& Message) {
}

TSubclassOf<UAnimInstance> USN2PlayerAnimInstance::GetBestWalkAnimLayer() const {
    return NULL;
}

TSubclassOf<UAnimInstance> USN2PlayerAnimInstance::GetBestSwimAnimLayer() const {
    return NULL;
}


