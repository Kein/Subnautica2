#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SN2WaitForSpecificPlayerReady.generated.h"

class AActor;
class APawn;
class APlayerController;
class APlayerState;
class USN2WaitForSpecificPlayerReady;

UCLASS()
class SUBNAUTICA2_API USN2WaitForSpecificPlayerReady : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSN2WaitForSpecificReadyEvent);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FSN2WaitForSpecificReadyEvent OnPlayerReady;
    
private:
    UPROPERTY()
    TWeakObjectPtr<APawn> PlayerPawn;
    
    UPROPERTY()
    TWeakObjectPtr<APlayerController> PlayerController;
    
    UPROPERTY()
    TWeakObjectPtr<APlayerState> PlayerState;
    
public:
    USN2WaitForSpecificPlayerReady();

    UFUNCTION(BlueprintCallable)
    static USN2WaitForSpecificPlayerReady* WaitForSpecificPlayerStateReady(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    static USN2WaitForSpecificPlayerReady* WaitForSpecificPlayerPawnReady(APawn* Player);
    
    UFUNCTION(BlueprintCallable)
    static USN2WaitForSpecificPlayerReady* WaitForSpecificPlayerControllerReady(APlayerController* Player);
    
protected:
    UFUNCTION()
    void OnSpecificPlayerReady(AActor* InPlayerRef);
    
};

