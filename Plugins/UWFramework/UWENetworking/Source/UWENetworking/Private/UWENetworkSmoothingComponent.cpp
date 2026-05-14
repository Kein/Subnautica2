#include "UWENetworkSmoothingComponent.h"

UUWENetworkSmoothingComponent::UUWENetworkSmoothingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableSmoothingInStandaloneOrListenServer = false;
    this->NetworkSmoothingMode = EUWENetworkSmoothingMode::Exponential;
    this->NetworkMaxSmoothUpdateDistance = 256.00f;
    this->NetworkNoSmoothUpdateDistance = 384.00f;
    this->NetworkSimulatedSmoothLocationTime = 0.20f;
    this->NetworkSimulatedSmoothRotationTime = 0.20f;
    this->bSetFirstFoundMeshAsChildSmoothingTarget = true;
    this->NetworkSmoothingTarget = EUWENetworkSmoothingTarget::ChildComponent;
    this->VisualComponent = NULL;
    this->UseAdaptiveSmoothTime = false;
    this->AdaptiveSmoothTimeCoefficient = 3.00f;
    this->AdaptiveSmoothTimeSmoothingTime = 4.00f;
    this->EnableLocationExtrapolation = false;
    this->LocationExtrapolationMaxDistanceSqr = 1000000.00f;
    this->SmoothExtrapolationVelocityChange = false;
    this->UseInterpolationPath = false;
    this->InterpolationPathCapacity = 16;
    this->EnableSweepTest = false;
    this->LastTransformUpdateInterval = 0.00f;
    this->AdaptiveSmoothTime = 0.00f;
}

void UUWENetworkSmoothingComponent::SetVisualComponent(USceneComponent* InVisualComponent, bool ResetState) {
}


