#include "AlertToggleButton.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"

AAlertToggleButton::AAlertToggleButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ButtonMesh"));
    this->ButtonMesh = (UStaticMeshComponent*)RootComponent;
    this->ButtonText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ButtonText"));
    this->ButtonText->SetupAttachment(RootComponent);
}

void AAlertToggleButton::OnBlockAlertTagChanged(FGameplayTag GameplayTag, int32 TagCount) {
}


