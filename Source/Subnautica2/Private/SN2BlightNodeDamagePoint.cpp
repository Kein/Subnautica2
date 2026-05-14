#include "SN2BlightNodeDamagePoint.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"

ASN2BlightNodeDamagePoint::ASN2BlightNodeDamagePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->Broken = false;
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
}


void ASN2BlightNodeDamagePoint::OnRep_Broken() {
}

void ASN2BlightNodeDamagePoint::OnInvincibilityTagChanged(FGameplayTag GameplayTag, int32 NewCount) {
}

bool ASN2BlightNodeDamagePoint::IsNodeBroken() const {
    return false;
}

bool ASN2BlightNodeDamagePoint::IsInvincible() const {
    return false;
}

void ASN2BlightNodeDamagePoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2BlightNodeDamagePoint, Broken);
}


