#include "UWELightingManagerSubsystem.h"

UUWELightingManagerSubsystem::UUWELightingManagerSubsystem() {
    this->TimeSinceLastUpdate = 0.00f;
}

void UUWELightingManagerSubsystem::SetUpdateFrequency(float NewUpdateFrequency) {
}

float UUWELightingManagerSubsystem::GetUpdateFrequencyDelta() {
    return 0.0f;
}

int32 UUWELightingManagerSubsystem::GetMaxNumShadowCastingLightsByScalability() {
    return 0;
}

UUWELightingManagerSubsystem* UUWELightingManagerSubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UUWELightingManagerSubsystem::CollectTopLights(TArray<FLightDebugRowData>& OutDebugRows) const {
}


