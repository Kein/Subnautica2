#pragma once
#include "CoreMinimal.h"
#include "UWEAbilityTask_WaitTargetDataBase.h"
#include "UWEAbilityTask_WaitActorList.generated.h"

class AActor;
class UGameplayAbility;
class UUWEAbilityTask_WaitActorList;

UCLASS()
class UWEABILITYTASK_API UUWEAbilityTask_WaitActorList : public UUWEAbilityTask_WaitTargetDataBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorListDelegate, const TArray<AActor*>&, OutActors);
    
    UPROPERTY(BlueprintAssignable)
    FActorListDelegate ValidData;
    
    UPROPERTY(BlueprintAssignable)
    FActorListDelegate Cancelled;
    
private:
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> Actors;
    
public:
    UUWEAbilityTask_WaitActorList();

    UFUNCTION(BlueprintCallable)
    static UUWEAbilityTask_WaitActorList* WaitActorListSynced(UGameplayAbility* OwningAbility, TArray<AActor*> InActors);
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetActors() const;
    
};

