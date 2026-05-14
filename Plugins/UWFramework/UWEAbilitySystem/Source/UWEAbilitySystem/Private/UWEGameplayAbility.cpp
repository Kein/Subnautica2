#include "UWEGameplayAbility.h"
#include "Templates/SubclassOf.h"

UUWEGameplayAbility::UUWEGameplayAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->bRestartOnPossess = false;
    this->bCanEverShowInputPrompt = true;
    this->GenericCost = 0.00f;
    this->GenericCooldown = 0.00f;
    this->bWaitAbilityEndWhenUnequipping = false;
    this->MaxDistance = 0.00f;
    this->InputAction = NULL;
    this->ActivationPolicy = EUWEAbilityActivationPolicy::OnInputTriggered;
    this->ActivationGroup = EUWEAbilityActivationGroup::Independent;
    this->Priority = 0;
    this->bInputPromptOnlyWhenActivatable = false;
    this->bCanBeSaved = false;
    this->bUWEIsAbilityEnding = false;
    this->OptionalGameplayEventData = NULL;
}

void UUWEGameplayAbility::UWERemoveGameplayCueFromTarget(UAbilitySystemComponent* TargetASC, FGameplayTag GameplayCueTag) {
}

void UUWEGameplayAbility::UWERemoveGameplayCue(FGameplayTag GameplayCueTag) {
}

FGameplayEffectSpecHandle UUWEGameplayAbility::UWEMakeOutgoingGameplayEffectSpecForDamage(TSubclassOf<UGameplayEffect> GameplayEffectClass, AActor* EffectCauser, float Damage, FGameplayTag DamageType, FHitResult HitResult) const {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectSpecHandle UUWEGameplayAbility::UWEMakeOutgoingGameplayEffectSpec(TSubclassOf<UGameplayEffect> GameplayEffectClass, AActor* EffectCauser, int32 Level, int32 Stacks) const {
    return FGameplayEffectSpecHandle{};
}

void UUWEGameplayAbility::UWEExecuteGameplayCueWithParamsOnTarget(UAbilitySystemComponent* TargetASC, FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters) {
}

void UUWEGameplayAbility::UWEExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters) {
}

void UUWEGameplayAbility::UWEEndAbility() {
}

bool UUWEGameplayAbility::UWECommitCost(bool BroadcastCommitEvent) {
    return false;
}

bool UUWEGameplayAbility::UWECheckCost_Implementation(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo) const {
    return false;
}

void UUWEGameplayAbility::UWECancelAbility() {
}

FActiveGameplayEffectHandle UUWEGameplayAbility::UWEApplyGameplayEffectToTarget(UAbilitySystemComponent* TargetASC, TSubclassOf<UGameplayEffect> GameplayEffectClass, AActor* EffectCauser, int32 GameplayEffectLevel, int32 Stacks, bool bRemoveOnAbilityEnd) {
    return FActiveGameplayEffectHandle{};
}

FActiveGameplayEffectHandle UUWEGameplayAbility::UWEApplyGameplayEffectToOwner(TSubclassOf<UGameplayEffect> GameplayEffectClass, AActor* EffectCauser, int32 GameplayEffectLevel, int32 Stacks, bool bRemoveOnAbilityEnd) {
    return FActiveGameplayEffectHandle{};
}

void UUWEGameplayAbility::UWEApplyCooldown() {
}

void UUWEGameplayAbility::UWEAddGameplayCueWithParamsToTarget(UAbilitySystemComponent* TargetASC, FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd) {
}

void UUWEGameplayAbility::UWEAddGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd) {
}

void UUWEGameplayAbility::UpdateTargetData(FGameplayAbilityTargetDataHandle TargetDataHandle) {
}

void UUWEGameplayAbility::RemoveAttachedGameplayEffects() {
}


bool UUWEGameplayAbility::IsInputPressed() const {
    return false;
}

bool UUWEGameplayAbility::HasActiveTasks(UGameplayTask* IgnoreTask, FName FilterName) const {
    return false;
}

UUWEAbilitySystemComponent* UUWEGameplayAbility::GetUWEAbilitySystemComponentFromActorInfo() const {
    return NULL;
}

FUWETargetActor UUWEGameplayAbility::GetHoverInfoFromActorInfo() const {
    return FUWETargetActor{};
}

UPrimitiveComponent* UUWEGameplayAbility::GetHoverComponentFromActorInfo() const {
    return NULL;
}

AActor* UUWEGameplayAbility::GetHoverActorFromActorInfo() const {
    return NULL;
}

FUWEGameplayEventParams UUWEGameplayAbility::GetGameplayEventData() const {
    return FUWEGameplayEventParams{};
}

FGameplayTagContainer UUWEGameplayAbility::GetCosmeticTagsFromActorInfo() const {
    return FGameplayTagContainer{};
}

float UUWEGameplayAbility::GetAttributeValue(FGameplayAttribute Attribute, bool& bFound) const {
    return 0.0f;
}

FUWEAnimationEventParams UUWEGameplayAbility::GetAnimationEventData() const {
    return FUWEAnimationEventParams{};
}

bool UUWEGameplayAbility::GetActivateOnSpawn_Implementation() const {
    return false;
}

FAbilityInfoData UUWEGameplayAbility::GetActivateAbilityInfo_Implementation() const {
    return FAbilityInfoData{};
}

void UUWEGameplayAbility::ForceRemoveGameplayCue(FGameplayTag GameplayCueTag) {
}

bool UUWEGameplayAbility::ChangeActivationGroup(EUWEAbilityActivationGroup NewGroup) {
    return false;
}

bool UUWEGameplayAbility::CanChangeActivationGroup(EUWEAbilityActivationGroup NewGroup) const {
    return false;
}

TArray<FActiveGameplayEffectHandle> UUWEGameplayAbility::BP_ApplyPredictedGameplayEffectToTarget(FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks) {
    return TArray<FActiveGameplayEffectHandle>();
}

void UUWEGameplayAbility::AttachEffect(FActiveGameplayEffectHandle ActiveHandle, UAbilitySystemComponent* TargetASC, int32 Stacks) {
}


