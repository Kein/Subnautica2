#include "SN2ScannerSpinningPointDataProvider.h"
#include "Net/UnrealNetwork.h"

USN2ScannerSpinningPointDataProvider::USN2ScannerSpinningPointDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScanHalfAngleDegrees = 30.00f;
    this->ScanRadius = 50000.00f;
    this->TurnDegreesPerSecond = 180.00f;
    this->CurrentRotation = 0.00f;
    this->ScanInterval = 0.25f;
    this->ScanHalfHeight = 50000.00f;
    this->RadiusAlwaysShow = 500.00f;
    this->ScanOverlapComponentClass = NULL;
    this->ScannedPointLifetime = 2.00f;
    this->SelectedPointID = -1;
    this->CachedCurrentComponent = NULL;
}




UPrimitiveComponent* USN2ScannerSpinningPointDataProvider::ServerGetSelectedComponent() {
    return NULL;
}

FLinearColor USN2ScannerSpinningPointDataProvider::ServerGetColorForComponent_Implementation(const UPrimitiveComponent* Component) {
    return FLinearColor{};
}

void USN2ScannerSpinningPointDataProvider::OnRegisteredComponentEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> Reason) {
}

bool USN2ScannerSpinningPointDataProvider::HasSelectedPointID() const {
    return false;
}

float USN2ScannerSpinningPointDataProvider::GetSmoothedRotation() const {
    return 0.0f;
}

FSpinningScannerPointData USN2ScannerSpinningPointDataProvider::GetSignal(int32 Index) const {
    return FSpinningScannerPointData{};
}

int32 USN2ScannerSpinningPointDataProvider::GetSelectedPointID() const {
    return 0;
}

float USN2ScannerSpinningPointDataProvider::GetScanRadius() const {
    return 0.0f;
}

float USN2ScannerSpinningPointDataProvider::GetScanHalfHeight() const {
    return 0.0f;
}

float USN2ScannerSpinningPointDataProvider::GetScanHalfAngleDegrees() const {
    return 0.0f;
}

int32 USN2ScannerSpinningPointDataProvider::GetNumSignals() const {
    return 0;
}

void USN2ScannerSpinningPointDataProvider::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USN2ScannerSpinningPointDataProvider, ScanHalfAngleDegrees);
    DOREPLIFETIME(USN2ScannerSpinningPointDataProvider, ScanRadius);
    DOREPLIFETIME(USN2ScannerSpinningPointDataProvider, TurnDegreesPerSecond);
    DOREPLIFETIME(USN2ScannerSpinningPointDataProvider, ActiveSignals);
    DOREPLIFETIME(USN2ScannerSpinningPointDataProvider, CurrentRotation);
    DOREPLIFETIME(USN2ScannerSpinningPointDataProvider, SelectedPointID);
}


