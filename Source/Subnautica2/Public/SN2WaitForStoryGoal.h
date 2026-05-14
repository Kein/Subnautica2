#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SN2WaitForStoryGoal.generated.h"

class AActor;
class UObject;
class USN2WaitForStoryGoal;
class UUWEStoryGoal;

UCLASS()
class SUBNAUTICA2_API USN2WaitForStoryGoal : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSN2WaitForStoryGoalEvent);
    
    UPROPERTY(BlueprintAssignable)
    FSN2WaitForStoryGoalEvent OnUnlocked;
    
private:
    UPROPERTY()
    TWeakObjectPtr<UUWEStoryGoal> StoryGoalToCheck;
    
    UPROPERTY()
    TWeakObjectPtr<UObject> WorldContext;
    
    UPROPERTY()
    bool bTriggerImmediate;
    
public:
    USN2WaitForStoryGoal();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USN2WaitForStoryGoal* WaitForStoryGoal(UObject* WorldContextObject, UUWEStoryGoal* StoryGoal, bool bTriggerImmediateIfUnlocked);
    
protected:
    UFUNCTION()
    void OnUnlockedStoryGoal(UUWEStoryGoal* UnlockedStoryGoal, AActor* ReceivingActor);
    
    UFUNCTION()
    void OnLocalPlayerReady();
    
};

