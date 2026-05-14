#pragma once
#include "CoreMinimal.h"
#include "OnStoryGoalEventTriggeredDelegate.generated.h"

class AActor;
class UUWEStoryGoal;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStoryGoalEventTriggered, UUWEStoryGoal*, UnlockedStoryGoal, AActor*, ReceivingActor);

