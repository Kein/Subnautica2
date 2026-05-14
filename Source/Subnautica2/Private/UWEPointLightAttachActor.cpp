#include "UWEPointLightAttachActor.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"

AUWEPointLightAttachActor::AUWEPointLightAttachActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Point Light"));
    this->PointLight->SetupAttachment(RootComponent);
}


