#include "UWEActorDataGroup.h"
#include "UWESaveComponent.h"
#include "UWEADGBroadcastComponent_Bool.h"

AUWEActorDataGroup::AUWEActorDataGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_DormantAll;
    this->EnabledBroadcastComponent = CreateDefaultSubobject<UUWEADGBroadcastComponent_Bool>(TEXT("EnabledBroadcastComponent"));
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
}

FGameplayTag AUWEActorDataGroup::GetIdentifier() const {
    return FGameplayTag{};
}

float AUWEActorDataGroup::GetFloatValue(FGameplayTag FieldIdentifier, bool& Valid) const {
    return 0.0f;
}

bool AUWEActorDataGroup::GetBoolValue(FGameplayTag FieldIdentifier, bool& Valid) const {
    return false;
}


