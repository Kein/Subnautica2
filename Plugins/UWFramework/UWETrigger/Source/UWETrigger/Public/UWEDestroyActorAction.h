#pragma once
#include "CoreMinimal.h"
#include "UWEPlayerTriggerAction.h"
#include "UWEDestroyActorAction.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETRIGGER_API UUWEDestroyActorAction : public UUWEPlayerTriggerAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AActor> ActorToDestroy;
    
public:
    UUWEDestroyActorAction(const FObjectInitializer& ObjectInitializer);

};

