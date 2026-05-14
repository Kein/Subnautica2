#include "UWESculpturalBaseDebugComponent.h"

UUWESculpturalBaseDebugComponent::UUWESculpturalBaseDebugComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UUWESculpturalBaseDebugComponent::GetSkipSupportCheck(const UObject* WorldContextObject) {
    return false;
}


