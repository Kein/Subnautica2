#pragma once
#include "CoreMinimal.h"
#include "Abilities/Async/AbilityAsync.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEAbilityAsync_WaitGameplayTagCountChanged.generated.h"

class AActor;
class UUWEAbilityAsync_WaitGameplayTagCountChanged;

UCLASS()
class UWEABILITYSYSTEM_API UUWEAbilityAsync_WaitGameplayTagCountChanged : public UAbilityAsync {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGameplayTagChangedDelegate, FGameplayTag, Tag, int32, NewCount, int32, OldCount);
    
    UPROPERTY(BlueprintAssignable)
    FGameplayTagChangedDelegate CountChanged;
    
    UUWEAbilityAsync_WaitGameplayTagCountChanged();

    UFUNCTION(BlueprintCallable)
    static UUWEAbilityAsync_WaitGameplayTagCountChanged* WaitGameplayTagCountChangedForActor(AActor* TargetActor, FGameplayTagContainer Tags, bool OnlyTriggerOnce);
    
};

