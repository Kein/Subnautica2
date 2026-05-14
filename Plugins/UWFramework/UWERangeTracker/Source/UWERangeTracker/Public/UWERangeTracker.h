#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "UWERangeTrackerPeerDataList.h"
#include "UWERangeTrackerPeerRangeCallbacks.h"
#include "UWERangeTrackerPeerRangeConfig.h"
#include "UWERangeTracker.generated.h"

class AActor;
class USceneComponent;

UCLASS(Abstract, BlueprintType)
class UWERANGETRACKER_API UUWERangeTracker : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    TArray<USceneComponent*> Targets;
    
    UPROPERTY()
    FUWERangeTrackerPeerDataList Peers;
    
public:
    UUWERangeTracker();

protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterTargetActor(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterPeerActorWithRangeConfigTag(AActor* Peer, const FGameplayTag& RangeConfigTag);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterPeerActorWithRangeConfig(AActor* Peer, const FUWERangeTrackerPeerRangeConfig& RangeConfig);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterPeerActor(AActor* Peer);
    
    UFUNCTION(BlueprintCallable)
    void RegisterTargetActor(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPeerActor(AActor* Peer, const FUWERangeTrackerPeerRangeConfig& RangeConfig, const FUWERangeTrackerPeerRangeCallbacks& Callbacks);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPeerCount();

    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UUWERangeTracker, STATGROUP_Tickables); }
};

