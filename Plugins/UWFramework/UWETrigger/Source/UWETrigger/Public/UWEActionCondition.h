#pragma once
#include "CoreMinimal.h"
#include "EUWECallFunctionContext.h"
#include "UWEPlayerTriggerAction.h"
#include "UWEActionCondition.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETRIGGER_API UUWEActionCondition : public UUWEPlayerTriggerAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString ConditionToCheck;
    
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AActor> TargetActor;
    
    UPROPERTY(EditAnywhere)
    EUWECallFunctionContext Context;
    
public:
    UUWEActionCondition(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool CheckCondition(AActor* TriggeringActor);
    
};

