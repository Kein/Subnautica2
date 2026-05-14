#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWEWaitDistanceExceeded.generated.h"

class AActor;
class USceneComponent;
class UUWEWaitDistanceExceeded;

UCLASS(Transient)
class UWERANGETRACKER_API UUWEWaitDistanceExceeded : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTaskDistanceExceededDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTaskCancelledDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FTaskDistanceExceededDelegate OnDistanceExceeded;
    
    UPROPERTY(BlueprintAssignable)
    FTaskCancelledDelegate OnCancelled;
    
private:
    UPROPERTY(Export)
    TWeakObjectPtr<USceneComponent> OtherSceneComponent;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> Actor;
    
public:
    UUWEWaitDistanceExceeded();

    UFUNCTION(BlueprintCallable)
    static UUWEWaitDistanceExceeded* WaitDistanceExceeded(AActor* InActor, USceneComponent* InOtherSceneComponent, float InDeltaDistance);
    
private:
    UFUNCTION()
    void OnActorDestroyed(AActor* DestroyedActor);
    
};

