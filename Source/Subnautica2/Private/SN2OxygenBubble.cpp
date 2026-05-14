#include "SN2OxygenBubble.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

ASN2OxygenBubble::ASN2OxygenBubble(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->SphereComponent = (USphereComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->bPopped = false;
    this->Mesh->SetupAttachment(RootComponent);
}

void ASN2OxygenBubble::Pop(const ASN2PlayerCharacter* Player) {
}

void ASN2OxygenBubble::OnRep_Popped() {
}

void ASN2OxygenBubble::OnRep_BubbleData() {
}

void ASN2OxygenBubble::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}



void ASN2OxygenBubble::BeginAscend(float DelaySeconds) {
}

void ASN2OxygenBubble::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2OxygenBubble, BubbleData);
    DOREPLIFETIME(ASN2OxygenBubble, bPopped);
}


