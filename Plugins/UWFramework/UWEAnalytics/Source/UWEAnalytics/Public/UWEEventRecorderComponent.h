#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TimerHandle.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEEventRecorderComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEANALYTICS_API UUWEEventRecorderComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FTimerHandle RequestEventsHandle;
    
    UPROPERTY()
    FGameplayTagContainer TagsToTrack;
    
public:
    UUWEEventRecorderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void StartTrackingTags();
    
protected:
    UFUNCTION()
    void OnTagChanged(const FGameplayTag Tag, int32 NewCount);
    
};

