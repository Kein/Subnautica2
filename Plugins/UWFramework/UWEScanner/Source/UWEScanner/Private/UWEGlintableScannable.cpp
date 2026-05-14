#include "UWEGlintableScannable.h"

UUWEGlintableScannable::UUWEGlintableScannable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GlintDistanceMeters = 15;
    this->bGlintActive = false;
}

bool UUWEGlintableScannable::ShouldGlint() const {
    return false;
}

bool UUWEGlintableScannable::LocalPlayerHasGlintableTool() const {
    return false;
}

bool UUWEGlintableScannable::IsLocalPlayerClose() const {
    return false;
}

void UUWEGlintableScannable::CheckGlint() {
}


