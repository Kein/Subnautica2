#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Tasks/AITask.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTask.h"
#include "EMercunaMoveResult.h"
#include "MercunaMoveTaskCompletedSignatureDelegate.h"
#include "MercunaSurfaceTask_MoveTo.generated.h"

class AAIController;
class AActor;
class UMercunaSurfaceTask_MoveTo;

UCLASS()
class MERCUNA_API UMercunaSurfaceTask_MoveTo : public UAITask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    UGameplayTask::FGenericGameplayTaskDelegate OnRequestFailed;
    
    UPROPERTY(BlueprintAssignable)
    FMercunaMoveTaskCompletedSignature OnMoveFinished;
    
public:
    UMercunaSurfaceTask_MoveTo();

protected:
    UFUNCTION()
    void OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result);
    
public:
    UFUNCTION(BlueprintCallable)
    static UMercunaSurfaceTask_MoveTo* MoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float EndDistance, bool AcceptPartialPath, bool bLockAILogic);
    
};

