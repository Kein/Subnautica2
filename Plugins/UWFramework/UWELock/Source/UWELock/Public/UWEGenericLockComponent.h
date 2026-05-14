#pragma once
#include "CoreMinimal.h"
#include "UWEBaseLockComponent.h"
#include "UWEGenericLockComponent.generated.h"

class AActor;
class UFMODEvent;
class UUWEStoryGoal;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWELOCK_API UUWEGenericLockComponent : public UUWEBaseLockComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UUWEStoryGoal>> StoryGoalsToUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UUWEStoryGoal>> StoryGoalsToLock;
    
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFMODEvent> LockSound;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFMODEvent> UnlockSound;
    
    UPROPERTY(EditAnywhere)
    bool ShouldUnlockAutomatically;
    
public:
    UUWEGenericLockComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void PlayLockSound(bool bIsLocked);
    
    UFUNCTION()
    void OnStoryGoalUnlocked(UUWEStoryGoal* StoryGoal, AActor* ReceivingActor);
    
};

