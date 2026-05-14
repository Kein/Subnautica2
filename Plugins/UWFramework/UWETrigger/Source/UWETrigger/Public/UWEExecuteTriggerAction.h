#pragma once
#include "CoreMinimal.h"
#include "UWEPlayerTriggerAction.h"
#include "UWEExecuteTriggerAction.generated.h"

class AUWETriggerBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETRIGGER_API UUWEExecuteTriggerAction : public UUWEPlayerTriggerAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AUWETriggerBase> Trigger;
    
public:
    UUWEExecuteTriggerAction(const FObjectInitializer& ObjectInitializer);

};

