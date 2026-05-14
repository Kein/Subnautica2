#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Tasks/AITask.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTask.h"
#include "EMercunaMoveResult.h"
#include "MercunaMoveTaskCompletedSignatureDelegate.h"
#include "Mercuna3DTask_MoveTo.generated.h"

class AAIController;
class AActor;
class UMercuna3DTask_MoveTo;

UCLASS()
class MERCUNA_API UMercuna3DTask_MoveTo : public UAITask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    UGameplayTask::FGenericGameplayTaskDelegate OnRequestFailed;
    
    UPROPERTY(BlueprintAssignable)
    FMercunaMoveTaskCompletedSignature OnMoveFinished;
    
public:
    UMercuna3DTask_MoveTo();

protected:
    UFUNCTION()
    void OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result);
    
public:
    UFUNCTION(BlueprintCallable)
    static UMercuna3DTask_MoveTo* MoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float EndDistance, bool AcceptPartialPath, bool bLockAILogic);
    
};

