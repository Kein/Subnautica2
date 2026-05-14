#include "SN2SubmarineDrainage.h"
#include "Components/StaticMeshComponent.h"
#include "SN2EMTTorsionPointComponent.h"

ASN2SubmarineDrainage::ASN2SubmarineDrainage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->EmtTorsionPointComponent = CreateDefaultSubobject<USN2EMTTorsionPointComponent>(TEXT("EmtTorsionPointComponent"));
    this->Mesh = (UStaticMeshComponent*)RootComponent;
    this->EmtTorsionPointComponent->SetupAttachment(RootComponent);
}

void ASN2SubmarineDrainage::OnApplyTorsion(float Torsion, float DeltaTime) {
}


