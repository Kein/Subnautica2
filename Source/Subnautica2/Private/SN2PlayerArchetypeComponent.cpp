#include "SN2PlayerArchetypeComponent.h"
#include "Net/UnrealNetwork.h"

USN2PlayerArchetypeComponent::USN2PlayerArchetypeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USN2PlayerArchetypeComponent::RemoveCharacterPart(FSN2CharacterPartHandle Handle) {
}

void USN2PlayerArchetypeComponent::RemoveAllCharacterParts() {
}

TArray<AActor*> USN2PlayerArchetypeComponent::GetCharacterPartActors() const {
    return TArray<AActor*>();
}

AActor* USN2PlayerArchetypeComponent::GetCharacterPartActor(FSN2CharacterPartHandle Handle) {
    return NULL;
}

FSN2CharacterPartHandle USN2PlayerArchetypeComponent::AddCharacterPart(const FSN2CharacterPart& NewPart) {
    return FSN2CharacterPartHandle{};
}

void USN2PlayerArchetypeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USN2PlayerArchetypeComponent, CharacterPartList);
}


