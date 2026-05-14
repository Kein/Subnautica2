#include "SN2SubmarineEngine.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

ASN2SubmarineEngine::ASN2SubmarineEngine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh = (UStaticMeshComponent*)RootComponent;
}

void ASN2SubmarineEngine::SetEngineStatus(const FGameplayTag& InEngineStatus) {
}

void ASN2SubmarineEngine::OnRep_EngineMode() {
}


void ASN2SubmarineEngine::OnDamageChangedServer() {
}

FGameplayTag ASN2SubmarineEngine::GetEngineStatus() const {
    return FGameplayTag{};
}

float ASN2SubmarineEngine::GetEngineEfficiency() const {
    return 0.0f;
}

FGameplayTag ASN2SubmarineEngine::GetCurrentEngineMode() {
    return FGameplayTag{};
}

void ASN2SubmarineEngine::CycleEngineMode() {
}

void ASN2SubmarineEngine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2SubmarineEngine, EngineMode);
}


