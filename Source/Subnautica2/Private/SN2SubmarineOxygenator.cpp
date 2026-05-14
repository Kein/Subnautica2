#include "SN2SubmarineOxygenator.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "SN2EMTTorsionPointComponent.h"

ASN2SubmarineOxygenator::ASN2SubmarineOxygenator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->EmtTorsionPointComponent = CreateDefaultSubobject<USN2EMTTorsionPointComponent>(TEXT("EmtTorsionPointComponent"));
    this->ScreenMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScreenMesh"));
    this->OxygenLevel = 1.00f;
    this->FilterEfficiency = 1.00f;
    this->SN2FilterDegradationRate = 0.00f;
    this->EmtTorsionPointComponent->SetupAttachment(RootComponent);
    this->ScreenMesh->SetupAttachment(RootComponent);
}

void ASN2SubmarineOxygenator::OnRep_OxygenLevel() {
}

void ASN2SubmarineOxygenator::OnRep_FilterEfficiency(float OldFilterEfficiency) {
}

void ASN2SubmarineOxygenator::OnPlayerExited(ACharacter* Player) {
}

void ASN2SubmarineOxygenator::OnPlayerEntered(ACharacter* Player) {
}

void ASN2SubmarineOxygenator::OnApplyTorsion(float Torsion, float DeltaTime) {
}

float ASN2SubmarineOxygenator::GetOxygenLevel() const {
    return 0.0f;
}

float ASN2SubmarineOxygenator::GetFilterEfficiency() const {
    return 0.0f;
}

void ASN2SubmarineOxygenator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2SubmarineOxygenator, OxygenLevel);
    DOREPLIFETIME(ASN2SubmarineOxygenator, FilterEfficiency);
}


