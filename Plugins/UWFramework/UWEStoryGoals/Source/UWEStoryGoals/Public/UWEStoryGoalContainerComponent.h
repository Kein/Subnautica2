#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "StoryGoalUnlockRecord.h"
#include "UWEStoryGoalArray.h"
#include "UWEStoryGoalContainerComponent.generated.h"

class UUWESaveHandle;
class UUWEStoryGoal;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESTORYGOALS_API UUWEStoryGoalContainerComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated)
    TArray<FStoryGoalUnlockRecord> UnlockRecords;
    
    UPROPERTY(BlueprintReadWrite)
    int32 MaxUnlockRecordsKept;
    
protected:
    UPROPERTY(Replicated, SaveGame, VisibleAnywhere)
    FUWEStoryGoalArray StoryGoals;
    
    UPROPERTY(VisibleAnywhere)
    TSet<UUWEStoryGoal*> CachedStoryGoals;
    
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    UUWEStoryGoalContainerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TestOnlyClearAllUnlocked();
    
    UFUNCTION(BlueprintPure)
    bool HasStoryGoal(UUWEStoryGoal* StoryGoal) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumStoryGoals() const;
    

    // Fix for true pure virtual functions not being implemented
};

