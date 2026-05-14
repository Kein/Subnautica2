#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWELoopingAudioTrigger.generated.h"

class UBoxComponent;
class UFMODEvent;

UCLASS()
class UWETRIGGER_API AUWELoopingAudioTrigger : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFMODEvent> Event;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBoxComponent* BoxComponent;
    
public:
    AUWELoopingAudioTrigger(const FObjectInitializer& ObjectInitializer);

};

