#include "UWEPhysicalAttributeSet.h"
#include "Net/UnrealNetwork.h"

UUWEPhysicalAttributeSet::UUWEPhysicalAttributeSet() {
}

void UUWEPhysicalAttributeSet::OnRep_Bulk(const FUWEGameplayAttributeData& OldValue) {
}

void UUWEPhysicalAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEPhysicalAttributeSet, Bulk);
}


