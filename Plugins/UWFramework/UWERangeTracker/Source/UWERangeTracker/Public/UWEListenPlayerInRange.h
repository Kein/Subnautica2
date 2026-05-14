#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Engine/EngineTypes.h"
#include "UWERangeTrackerPeerRangeConfig.h"
#include "UWEListenPlayerInRange.generated.h"

class AActor;
class UUWEListenPlayerInRange;

UCLASS()
class UWERANGETRACKER_API UUWEListenPlayerInRange : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUWEListenPlayerInRangeCallback);
    
protected:
    UPROPERTY()
    AActor* Peer;
    
public:
    UPROPERTY(BlueprintAssignable)
    FUWEListenPlayerInRangeCallback InRangeCallback;
    
    UPROPERTY(BlueprintAssignable)
    FUWEListenPlayerInRangeCallback OutOfRangeCallback;
    
    UUWEListenPlayerInRange();

protected:
    UFUNCTION()
    void OnPeerEndPlay(AActor* InPeer, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable)
    static UUWEListenPlayerInRange* ListenPlayerInRange(AActor* InPeer, const FUWERangeTrackerPeerRangeConfig& InRangeConfig);
    
};

