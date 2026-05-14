#include "UWEWorldPopResourceBaseActor.h"
#include "Components/StaticMeshComponent.h"
#include "UWEAssetDataComponent.h"
#include "Net/UnrealNetwork.h"

AUWEWorldPopResourceBaseActor::AUWEWorldPopResourceBaseActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->bIsBreakingDisabled = false;
    this->bHasBeenGathered = false;
    this->bHasBeenModified = false;
    this->StaticMesh = (UStaticMeshComponent*)RootComponent;
    this->AssetData = CreateDefaultSubobject<UUWEAssetDataComponent>(TEXT("AssetData"));
}

void AUWEWorldPopResourceBaseActor::OnRep_HasBeenGathered() {
}


void AUWEWorldPopResourceBaseActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWEWorldPopResourceBaseActor, bHasBeenGathered);
}


