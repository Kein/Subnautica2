#pragma once
#include "CoreMinimal.h"
#include "EUWECallFunctionContext.h"
#include "UWEPlayerTriggerAction.h"
#include "UWECallFunctionAction.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETRIGGER_API UUWECallFunctionAction : public UUWEPlayerTriggerAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString FunctionToCall;
    
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AActor> TargetActor;
    
    UPROPERTY(EditAnywhere)
    EUWECallFunctionContext Context;
    
public:
    UUWECallFunctionAction(const FObjectInitializer& ObjectInitializer);

};

