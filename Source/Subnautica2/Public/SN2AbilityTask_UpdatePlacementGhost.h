#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GameplayTagContainer.h"
#include "SN2GhostPlacement.h"
#include "SN2AbilityTask_UpdatePlacementGhost.generated.h"

class ASN2BuilderGhost;
class UGameplayAbility;
class USN2AbilityTask_UpdatePlacementGhost;
class USN2BuilderConstructActionData;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_UpdatePlacementGhost : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FSN2GhostPlacement GhostPlacement;
    
protected:
    UPROPERTY()
    TWeakObjectPtr<ASN2BuilderGhost> Ghost;
    
    UPROPERTY()
    USN2BuilderConstructActionData* ActionData;
    
public:
    USN2AbilityTask_UpdatePlacementGhost();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_UpdatePlacementGhost* UpdatePlacementGhost(UGameplayAbility* OwningAbility, ASN2BuilderGhost* NewGhost, USN2BuilderConstructActionData* NewActionData);
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetCannotActivateReason() const;
    
    UFUNCTION(BlueprintPure)
    bool CanRotate() const;
    
};

