#pragma once
#include "CoreMinimal.h"
#include "UWEPlayerTriggerAction.h"
#include "UWEPlaySoundAction.generated.h"

class UFMODEvent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETRIGGER_API UUWEPlaySoundAction : public UUWEPlayerTriggerAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFMODEvent> Event;
    
public:
    UUWEPlaySoundAction(const FObjectInitializer& ObjectInitializer);

};

