#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "SN2AbilityTask_UpdateResonatingCues.generated.h"

class AActor;
class UGameplayAbility;
class USN2AbilityTask_UpdateResonatingCues;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_UpdateResonatingCues : public UAbilityTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    TWeakObjectPtr<AActor> AvatarActor;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> ResonatingActors;
    
public:
    USN2AbilityTask_UpdateResonatingCues();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_UpdateResonatingCues* UpdateResonatingCues(UGameplayAbility* OwningAbility);
    
};

