#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEEventKey.h"
#include "UWEUnlockablesList.h"
#include "SN2UnlockPlayerStateComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2UnlockPlayerStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FUWEUnlockablesList AllUnlockables;
    
    UPROPERTY()
    TMap<FUWEEventKey, FUWEUnlockablesList> UnlockablesCallbackMap;
    
public:
    USN2UnlockPlayerStateComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void PollUnlockables(FUWEEventKey TriggeredEventKey);
    
    UFUNCTION()
    void OnLocalClientReady();
    
    UFUNCTION()
    void OnAnyEventTrackerEventFired(FUWEEventKey EventKey, int32 OldValue, int32 NewValue);
    
};

