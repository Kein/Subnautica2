#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "UWEAIPatrolSplineSubsystem.generated.h"

class AUWEAIPatrolSpline;

UCLASS()
class UWEAIWORLD_API UUWEAIPatrolSplineSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FGameplayTag, AUWEAIPatrolSpline*> PatrolSplineMap;
    
public:
    UUWEAIPatrolSplineSubsystem();

virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UUWEAIPatrolSplineSubsystem, STATGROUP_Tickables); }
};

