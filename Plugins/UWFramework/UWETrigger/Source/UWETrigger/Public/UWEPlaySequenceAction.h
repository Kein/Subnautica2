#pragma once
#include "CoreMinimal.h"
#include "UWEPlayerTriggerAction.h"
#include "UWEPlaySequenceAction.generated.h"

class ALevelSequenceActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETRIGGER_API UUWEPlaySequenceAction : public UUWEPlayerTriggerAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ALevelSequenceActor> SequenceActor;
    
    UPROPERTY(EditAnywhere)
    float StartTime;
    
public:
    UUWEPlaySequenceAction(const FObjectInitializer& ObjectInitializer);

};

