#pragma once
#include "CoreMinimal.h"
#include "AbilitySystemGlobals.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "UWEAbilitySystemGlobals.generated.h"

class AActor;
class UAbilitySystemComponent;
class UGameplayTask;
class UUWEAbilitySystemComponent;

UCLASS(BlueprintType)
class UWEABILITYSYSTEM_API UUWEAbilitySystemGlobals : public UAbilitySystemGlobals {
    GENERATED_BODY()
public:
    UUWEAbilitySystemGlobals();

    UFUNCTION(BlueprintCallable)
    static void TryEndTask(UGameplayTask* Task);
    
    UFUNCTION(BlueprintPure)
    static UUWEAbilitySystemComponent* GetUWEAbilitySystemComponentFromActor(const AActor* Actor, bool LookForComponent);
    
    UFUNCTION(BlueprintPure)
    static UAbilitySystemComponent* GetAnyAbilitySystemComponentFromActor(const AActor* Actor, bool LookForComponent);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteGameplayCueUnpredicted(UAbilitySystemComponent* ASC, const FGameplayTag& CueTag, const FGameplayCueParameters& Parameters);
    
};

