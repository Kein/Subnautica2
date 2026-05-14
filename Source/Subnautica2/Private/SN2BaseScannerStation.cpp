#include "SN2BaseScannerStation.h"
#include "Components/BoxComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "UWEPoweredApplianceComponent.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

ASN2BaseScannerStation::ASN2BaseScannerStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ScreenInteraction = CreateDefaultSubobject<UBoxComponent>(TEXT("ScreenInteraction"));
    this->PoweredApplianceComponent = CreateDefaultSubobject<UUWEPoweredApplianceComponent>(TEXT("PoweredApplianceComponent"));
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->Points = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Points"));
    this->ScannerRadius = 30000.00f;
    this->ScannerHalfHeight = 30000.00f;
    this->PointCloudRadius = 200.00f;
    this->MaxPointScaleAtCount = 10;
    this->MaxPointCount = 1000;
    this->UpdateInterval = 1.00f;
    this->FiltersUpdateInterval = 1.00f;
    this->MinDistanceToCreateNewPoints = 1000.00f;
    this->ActiveFilter = NULL;
    this->SelectedPointIndex = -1;
    this->LastPointCount = -1;
    this->ScreenWidget = NULL;
    this->DistanceTask = NULL;
    this->Points->SetupAttachment(RootComponent);
    this->ScreenInteraction->SetupAttachment(RootComponent);
}

void ASN2BaseScannerStation::UpdatePoints() {
}

void ASN2BaseScannerStation::SetSelectedPointData_Implementation(FVector PointCloudWorldLocation, FSN2ActiveScannerPoint Info) {
}

void ASN2BaseScannerStation::OnWidgetPopped(TEnumAsByte<EUWEWindowManagerLayer> LayerId, bool bIsLast, TSubclassOf<UCommonActivatableWidget> Class) {
}

void ASN2BaseScannerStation::OnRep_SelectedPointIndex() {
}

void ASN2BaseScannerStation::OnRep_AvailableFilters() {
}

void ASN2BaseScannerStation::OnRep_ActivePoints(const TArray<FSN2ActiveScannerPoint>& PriorPoints) {
}

void ASN2BaseScannerStation::OnRep_ActiveFilter() {
}

void ASN2BaseScannerStation::OnPowerStateChanged(bool bNewIsPowered) {
}

void ASN2BaseScannerStation::OnFilterUnlocked(FUWEEventKey EventKey, int32 OldValue, int32 NewValue) {
}

float ASN2BaseScannerStation::GetScanRadius() const {
    return 0.0f;
}

FVector ASN2BaseScannerStation::GetPointCloudPosition(const FVector& WorldPosition) const {
    return FVector{};
}

int32 ASN2BaseScannerStation::GetNumActivePoints() const {
    return 0;
}

TArray<USN2BaseScannerStationFilterDataAsset*> ASN2BaseScannerStation::GetAllowedFilters() const {
    return TArray<USN2BaseScannerStationFilterDataAsset*>();
}

USN2BaseScannerStationFilterDataAsset* ASN2BaseScannerStation::GetActiveFilter() const {
    return NULL;
}

void ASN2BaseScannerStation::CloseUI() {
}

void ASN2BaseScannerStation::ClearSelectedPoint_Implementation() {
}

void ASN2BaseScannerStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2BaseScannerStation, ActiveFilter);
    DOREPLIFETIME(ASN2BaseScannerStation, SelectedPointIndex);
    DOREPLIFETIME(ASN2BaseScannerStation, AvailableFilters);
    DOREPLIFETIME(ASN2BaseScannerStation, ActivePoints);
}


