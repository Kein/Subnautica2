#include "UWEBioBedManager.h"
#include "Net/UnrealNetwork.h"

AUWEBioBedManager::AUWEBioBedManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bNetLoadOnClient = false;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->SaveHandle = NULL;
}

void AUWEBioBedManager::RegisterBioBed(AUWEBioBedBase* biobed) {
}

void AUWEBioBedManager::OnRep_BioBedAssignments(const TArray<FUWEBioBedAssignment>& OldAssignments) const {
}

AUWEBioBedManager* AUWEBioBedManager::GetBioBedManager(const UObject* WorldContextObject) {
    return NULL;
}

void AUWEBioBedManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWEBioBedManager, BioBedAssignments);
    DOREPLIFETIME(AUWEBioBedManager, BioBedEntries);
}


