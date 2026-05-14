#include "UWETimeOfDayComponent.h"
#include "Net/UnrealNetwork.h"

UUWETimeOfDayComponent::UUWETimeOfDayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialNumGameDays = 0.00f;
    this->WorldTimeAtInitialValue = 0.00f;
    this->WorldTimeAtTimeFrozen = -1.00f;
    this->DayLengthMinutes = 24;
    this->HourStartDawn = 3;
    this->HourStartDay = 4;
    this->HourStartDusk = 20;
    this->HourStartNight = 21;
    this->InitialHour = 7.00f;
    this->SaveHandle = NULL;
}

void UUWETimeOfDayComponent::SetTimeOfDay(float NewTime) {
}

void UUWETimeOfDayComponent::SetDayNumber(int32 NewDayNumber) {
}

void UUWETimeOfDayComponent::SetDayLengthInMinutes(float NewLength) {
}

void UUWETimeOfDayComponent::ResetTimeOfDayToDefault() {
}

void UUWETimeOfDayComponent::OnRep_TimeOfDayUpdatedManually() {
}

bool UUWETimeOfDayComponent::IsNight() {
    return false;
}

bool UUWETimeOfDayComponent::IsDaylight() {
    return false;
}

bool UUWETimeOfDayComponent::IsDay() {
    return false;
}

float UUWETimeOfDayComponent::GetTimeOfDayFraction() {
    return 0.0f;
}

FHourMinute UUWETimeOfDayComponent::GetTimeOfDay() {
    return FHourMinute{};
}

double UUWETimeOfDayComponent::GetNumGameDays() {
    return 0.0;
}

float UUWETimeOfDayComponent::GetNormalizedDaylight() {
    return 0.0f;
}

EDayPhase UUWETimeOfDayComponent::GetDayPhase() {
    return EDayPhase::None;
}

int32 UUWETimeOfDayComponent::GetDayNumber() {
    return 0;
}

void UUWETimeOfDayComponent::FreezeTime(bool ShouldFreeze) {
}

void UUWETimeOfDayComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWETimeOfDayComponent, InitialNumGameDays);
    DOREPLIFETIME(UUWETimeOfDayComponent, WorldTimeAtInitialValue);
    DOREPLIFETIME(UUWETimeOfDayComponent, WorldTimeAtTimeFrozen);
}


