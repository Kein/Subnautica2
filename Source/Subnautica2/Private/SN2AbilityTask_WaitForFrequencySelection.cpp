#include "SN2AbilityTask_WaitForFrequencySelection.h"
#include "Net/UnrealNetwork.h"

USN2AbilityTask_WaitForFrequencySelection::USN2AbilityTask_WaitForFrequencySelection() {
    this->TimeStarted = 0.00f;
    this->CycleTime = 0.00f;
}

USN2AbilityTask_WaitForFrequencySelection* USN2AbilityTask_WaitForFrequencySelection::WaitForFrequencySelection(UGameplayAbility* OwningAbility, double InCycleTime) {
    return NULL;
}

void USN2AbilityTask_WaitForFrequencySelection::SendFrequencySelection(float InFrequency) {
}

void USN2AbilityTask_WaitForFrequencySelection::OnInput() {
}

float USN2AbilityTask_WaitForFrequencySelection::GetFrequency() const {
    return 0.0f;
}

void USN2AbilityTask_WaitForFrequencySelection::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USN2AbilityTask_WaitForFrequencySelection, TimeStarted);
    DOREPLIFETIME(USN2AbilityTask_WaitForFrequencySelection, CycleTime);
}


