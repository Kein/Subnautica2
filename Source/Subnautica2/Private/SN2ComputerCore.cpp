#include "SN2ComputerCore.h"
#include "UWEPoweredApplianceComponent.h"

ASN2ComputerCore::ASN2ComputerCore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReadyGoal = NULL;
    this->PoweredApplianceComponent = CreateDefaultSubobject<UUWEPoweredApplianceComponent>(TEXT("PoweredApplianceComponent"));
}

void ASN2ComputerCore::NotifyReadyGoalsSet_Implementation(UUWEStoryGoal* Goal) {
}

void ASN2ComputerCore::NotifyReadyGoalsClear_Implementation() {
}


