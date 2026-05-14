#include "UWESculpturalBaseProxy.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AUWESculpturalBaseProxy::AUWESculpturalBaseProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRoot"));
    this->NeedsOverlapVolumes = true;
    this->ReplicationTest = 0;
}

bool AUWESculpturalBaseProxy::TryGetCellCoordsAndNormalFromHitResult(FHitResult Hit, FIntVector& CoordsOut, FVector& NormalOut) {
    return false;
}

AUWESculpturalBaseActor* AUWESculpturalBaseProxy::GetBase() {
    return NULL;
}

void AUWESculpturalBaseProxy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWESculpturalBaseProxy, OwnerGuid);
    DOREPLIFETIME(AUWESculpturalBaseProxy, ProxyChunkCoords);
    DOREPLIFETIME(AUWESculpturalBaseProxy, CellOriginOffset);
    DOREPLIFETIME(AUWESculpturalBaseProxy, NeedsOverlapVolumes);
    DOREPLIFETIME(AUWESculpturalBaseProxy, ReplicationTest);
}


