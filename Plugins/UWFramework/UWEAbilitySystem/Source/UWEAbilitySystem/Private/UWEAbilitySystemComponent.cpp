#include "UWEAbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UUWEAbilitySystemComponent::UUWEAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHandlingGameplayEvent = false;
    this->bShouldAutoSave = true;
    this->bReplicateAttributes = true;
    this->SaveHandle = NULL;
}

FActiveGameplayEffectHandle UUWEAbilitySystemComponent::UWEApplyDamageOverTime(float Damage, float Period, float duration, FGameplayTag DamageType, AActor* DamageReceiver, FHitResult HitResult, FGameplayTagContainer ContextTags) {
    return FActiveGameplayEffectHandle{};
}

FActiveGameplayEffectHandle UUWEAbilitySystemComponent::UWEApplyDamage(float Damage, FGameplayTag DamageType, AActor* DamageReceiver, FHitResult HitResult, FGameplayTagContainer ContextTags) {
    return FActiveGameplayEffectHandle{};
}

void UUWEAbilitySystemComponent::UWEApplyAOEDamage(float Damage, FGameplayTag DamageType, FVector Location, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, const FName& ObstacleCheckProfileName, float Radius, bool bIncludeSelf, bool bDoLOSCheck, FGameplayTagContainer ContextTags) {
}

void UUWEAbilitySystemComponent::TagResponseEvent(const FGameplayTag Tag, int32 NewCount, int32 idx) {
}

void UUWEAbilitySystemComponent::SetPersistentGameplayTag(const FGameplayTag& Tag, bool bActive) {
}

bool UUWEAbilitySystemComponent::SetGameplayEffectDurationHandle(FActiveGameplayEffectHandle Handle, float NewDuration) {
    return false;
}

void UUWEAbilitySystemComponent::ServerRestartActiveAbilities_Implementation() {
}

void UUWEAbilitySystemComponent::RemoveGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters) {
}

void UUWEAbilitySystemComponent::RemoveDynamicTagGameplayEffect(const FGameplayTag& Tag) {
}

void UUWEAbilitySystemComponent::OnRep_AbilityTags(const FGameplayTagContainer& OldTags) {
}

void UUWEAbilitySystemComponent::InvalidateClientPredictionKey() {
}

AActor* UUWEAbilitySystemComponent::GetTargetActor() {
    return NULL;
}

UGameplayTask* UUWEAbilitySystemComponent::GetSimulatedTask(TSubclassOf<UGameplayTask> TaskClass) {
    return NULL;
}

void UUWEAbilitySystemComponent::ExecuteGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters) {
}

void UUWEAbilitySystemComponent::BP_SetLooseGameplayTagCount(FGameplayTag Tag, int32 Count) {
}

void UUWEAbilitySystemComponent::BP_RemoveLooseGameplayTag(FGameplayTag Tag, int32 Count) {
}

FActiveGameplayEffectHandle UUWEAbilitySystemComponent::BP_ApplyUniqueGameplayEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level, FGameplayEffectContextHandle EffectContext, bool& bSuccess) {
    return FActiveGameplayEffectHandle{};
}

void UUWEAbilitySystemComponent::BP_AddLooseGameplayTag(FGameplayTag Tag, int32 Count) {
}

bool UUWEAbilitySystemComponent::AllAbilitySetAbilitiesGranted() const {
    return false;
}

void UUWEAbilitySystemComponent::AddUniqueDynamicTagGameplayEffect(const FGameplayTag& Tag) {
}

FActiveGameplayEffectHandle UUWEAbilitySystemComponent::AddReplicatedGameplayTagForDuration(const FGameplayTag& Tag, float duration, bool bPredict) {
    return FActiveGameplayEffectHandle{};
}

void UUWEAbilitySystemComponent::AddGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters) {
}

FActiveGameplayEffectHandle UUWEAbilitySystemComponent::AddDynamicTagGameplayEffect(const FGameplayTag& Tag) {
    return FActiveGameplayEffectHandle{};
}

void UUWEAbilitySystemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEAbilitySystemComponent, AbilityTags);
}


