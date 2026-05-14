#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "StartMoveOnMoveFailedDelegate.h"
#include "StartMoveOnMoveSuccessDelegate.h"
#include "SN2AbilityTask_StartMove.generated.h"

class UGameplayAbility;
class USN2AbilityTask_StartMove;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_StartMove : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FStartMoveOnMoveSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FStartMoveOnMoveFailed OnFailed;
    
    USN2AbilityTask_StartMove();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_StartMove* StartMove(UGameplayAbility* OwningAbility);
    
};

