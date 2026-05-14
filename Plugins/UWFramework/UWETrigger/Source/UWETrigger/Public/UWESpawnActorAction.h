#pragma once
#include "CoreMinimal.h"
#include "UWEPlayerTriggerAction.h"
#include "UWESpawnActorAction.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETRIGGER_API UUWESpawnActorAction : public UUWEPlayerTriggerAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> ActorToSpawn;
    
public:
    UUWESpawnActorAction(const FObjectInitializer& ObjectInitializer);

};

