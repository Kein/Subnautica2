#include "SN2AbilityTask_UpdateResonatingCues.h"
#include "Net/UnrealNetwork.h"

USN2AbilityTask_UpdateResonatingCues::USN2AbilityTask_UpdateResonatingCues() {
}

USN2AbilityTask_UpdateResonatingCues* USN2AbilityTask_UpdateResonatingCues::UpdateResonatingCues(UGameplayAbility* OwningAbility) {
    return NULL;
}

void USN2AbilityTask_UpdateResonatingCues::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USN2AbilityTask_UpdateResonatingCues, AvatarActor);
}


