#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TimerHandle.h"
#include "UWEBaseDynamicEvent.h"
#include "UWETimeBasedDynamicEvent.generated.h"

class AActor;

UCLASS(CollapseCategories, EditInlineNew)
class UWEDYNAMICEVENTS_API UUWETimeBasedDynamicEvent : public UUWEBaseDynamicEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, SaveGame)
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(EditDefaultsOnly)
    float SpawnDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float TimeInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float TickRate;
    
private:
    UPROPERTY(Transient)
    FTimerHandle TickTimerHandle;
    
    UPROPERTY(SaveGame)
    FTransform ActorTransform;
    
    UPROPERTY(SaveGame)
    float CurrentTimeInterval;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> ActorInstance;
    
public:
    UUWETimeBasedDynamicEvent();

protected:
    UFUNCTION()
    void CustomTick();
    
};

