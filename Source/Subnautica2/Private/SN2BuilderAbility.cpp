#include "SN2BuilderAbility.h"

USN2BuilderAbility::USN2BuilderAbility() {
    this->IsDeconstruct = false;
}

bool USN2BuilderAbility::HasValidDeconstructTarget() const {
    return false;
}

bool USN2BuilderAbility::HasValidConstructTarget() const {
    return false;
}

AActor* USN2BuilderAbility::GetCurrentTarget() const {
    return NULL;
}

ASN2BuilderTool* USN2BuilderAbility::GetBuilderTool() const {
    return NULL;
}


