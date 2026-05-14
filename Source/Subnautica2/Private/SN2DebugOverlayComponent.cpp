#include "SN2DebugOverlayComponent.h"

USN2DebugOverlayComponent::USN2DebugOverlayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelectedTab = TabsTypes::Info;
    this->TargetActor = NULL;
}

void USN2DebugOverlayComponent::CycleTargets(int32 Direction) {
}

void USN2DebugOverlayComponent::CycleTab() {
}


