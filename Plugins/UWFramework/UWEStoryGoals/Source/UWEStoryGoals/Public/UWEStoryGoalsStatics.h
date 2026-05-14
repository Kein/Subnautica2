#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWEStoryGoalsStatics.generated.h"

class APawn;
class APlayerState;
class UObject;
class UUWEStoryGoal;

UCLASS(BlueprintType)
class UWESTORYGOALS_API UUWEStoryGoalsStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEStoryGoalsStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnlockWorldStoryGoal(UObject* WorldContext, UUWEStoryGoal* StoryGoal);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnlockPlayerStoryGoalForPawn(UObject* WorldContext, UUWEStoryGoal* StoryGoal, APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnlockPlayerStoryGoal(UObject* WorldContext, UUWEStoryGoal* StoryGoal, APlayerState* PlayerState);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsStoryGoalUnlocked(UObject* WorldContext, UUWEStoryGoal* StoryGoal, APlayerState* ForPlayerState);
    
};

