#include "UWEAutoMovePath.h"
#include "Components/SplineComponent.h"

AUWEAutoMovePath::AUWEAutoMovePath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableAutoLODGeneration = false;
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Path"));
    this->Path = (USplineComponent*)RootComponent;
}


