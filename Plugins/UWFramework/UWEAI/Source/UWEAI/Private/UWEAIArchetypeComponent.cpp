#include "UWEAIArchetypeComponent.h"

UUWEAIArchetypeComponent::UUWEAIArchetypeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BehaviorTreeOverride = NULL;
    this->bForceDisableLODs = false;
    this->ArchetypeData = NULL;
    this->LoadedArchetypeData = NULL;
    this->ProfilesDataTable = NULL;
    this->CurrentProfileName = TEXT("Default");
}

void UUWEAIArchetypeComponent::SwitchProfile(FName ProfileName) {
}

void UUWEAIArchetypeComponent::LoadArchetypeData(const UUWEAIArchetypeDataAsset* NewArchetypeData) {
}

float UUWEAIArchetypeComponent::GetSightRadiusMultiplier() const {
    return 0.0f;
}

float UUWEAIArchetypeComponent::GetSightRadius() {
    return 0.0f;
}

float UUWEAIArchetypeComponent::GetPeripheralVisionAngleDegreesMultiplier() const {
    return 0.0f;
}

float UUWEAIArchetypeComponent::GetPeripheralVisionAngleDegrees() {
    return 0.0f;
}

float UUWEAIArchetypeComponent::GetLoseSightRadiusMultiplier() const {
    return 0.0f;
}

float UUWEAIArchetypeComponent::GetLoseSightRadius() {
    return 0.0f;
}

UUWEAIArchetypeDataAsset* UUWEAIArchetypeComponent::GetLoadedArchetypeData() const {
    return NULL;
}

float UUWEAIArchetypeComponent::GetHabitatRadiusMultiplier() const {
    return 0.0f;
}

UFMODEvent* UUWEAIArchetypeComponent::GetFMODEvent(FGameplayTag InGameplayTag) {
    return NULL;
}

UUWEAIArchetypeDataAsset* UUWEAIArchetypeComponent::GetDefaultArchetypeData() const {
    return NULL;
}

float UUWEAIArchetypeComponent::GetDecelerationAwarenessPerSecond() const {
    return 0.0f;
}

float UUWEAIArchetypeComponent::GetDamageMultiplier() const {
    return 0.0f;
}

FUWEAIProfileDataRow UUWEAIArchetypeComponent::GetCurrentProfile() const {
    return FUWEAIProfileDataRow{};
}

FUWEAttackData UUWEAIArchetypeComponent::GetAttackData(FGameplayTag AttackTag) {
    return FUWEAttackData{};
}

TSoftObjectPtr<UAnimMontage> UUWEAIArchetypeComponent::GetAnimMontage(FGameplayTag InGameplayTag) {
    return NULL;
}

FUWEAISoundData UUWEAIArchetypeComponent::GetAISoundData(FGameplayTag InGameplayTag) {
    return FUWEAISoundData{};
}

float UUWEAIArchetypeComponent::GetAccelerationAwarenessPerSecond() const {
    return 0.0f;
}


