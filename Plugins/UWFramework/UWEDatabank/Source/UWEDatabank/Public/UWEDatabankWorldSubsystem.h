#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWEDatabankWorldSubsystem.generated.h"

class AActor;
class UUWEStoryGoal;

UCLASS()
class UWEDATABANK_API UUWEDatabankWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UUWEDatabankWorldSubsystem();

    UFUNCTION()
    void OnStoryGoalUnlocked(UUWEStoryGoal* StoryGoalTag, AActor* ReceivingActor);
    
};

