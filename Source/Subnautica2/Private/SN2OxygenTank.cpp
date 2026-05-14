#include "SN2OxygenTank.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"

ASN2OxygenTank::ASN2OxygenTank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->OxygenLevel = -1.00f;
    this->MaxOxygenLevel = 30.00f;
}

void ASN2OxygenTank::SetOxygenLevel(float NewLevel) {
}

void ASN2OxygenTank::OnOxygenChangedCallback(float Oxygen) {
}

void ASN2OxygenTank::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2OxygenTank, OxygenLevel);
}


