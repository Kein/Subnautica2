#include "UWEVideoTourComponent.h"

UUWEVideoTourComponent::UUWEVideoTourComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineMoverActor = NULL;
    this->VideoTourPathActor = NULL;
}

void UUWEVideoTourComponent::StopVideoTourPath_Implementation() {
}

void UUWEVideoTourComponent::StartVideoTourPath_Implementation() {
}

void UUWEVideoTourComponent::NotifyStopPerformanceCapture() {
}

void UUWEVideoTourComponent::CreateVideoTourPath_Implementation(const FString& InVideoTourPath) {
}


