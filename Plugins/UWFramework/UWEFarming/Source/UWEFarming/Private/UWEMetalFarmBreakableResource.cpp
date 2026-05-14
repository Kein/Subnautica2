#include "UWEMetalFarmBreakableResource.h"
#include "Components/CapsuleComponent.h"
#include "UWEAssetDataComponent.h"
#include "Net/UnrealNetwork.h"

AUWEMetalFarmBreakableResource::AUWEMetalFarmBreakableResource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collider"));
    this->bIsBreakingDisabled = false;
    this->AssetData = CreateDefaultSubobject<UUWEAssetDataComponent>(TEXT("AssetData"));
    this->Collider = (UCapsuleComponent*)RootComponent;
}

void AUWEMetalFarmBreakableResource::SetMetalData(UUWEResonatableData* ResonatableData, const FText& Name) {
}

void AUWEMetalFarmBreakableResource::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWEMetalFarmBreakableResource, bIsBreakingDisabled);
    DOREPLIFETIME(AUWEMetalFarmBreakableResource, MetalName);
}


