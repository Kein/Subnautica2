#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SN2WaitForLocalPlayerReady.generated.h"

class USN2WaitForLocalPlayerReady;

UCLASS()
class SUBNAUTICA2_API USN2WaitForLocalPlayerReady : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSN2WaitForPlayerReadyEvent);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FSN2WaitForPlayerReadyEvent OnPlayerReady;
    
public:
    USN2WaitForLocalPlayerReady();

    UFUNCTION(BlueprintCallable)
    static USN2WaitForLocalPlayerReady* WaitForLocalPlayerReady();
    
protected:
    UFUNCTION()
    void OnClientPlayerReady();
    
};

