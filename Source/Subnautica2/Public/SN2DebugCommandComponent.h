#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SN2DebugCommandComponent.generated.h"

class UUWEStoryGoal;
class UUWEStoryGoalContainerComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2DebugCommandComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USN2DebugCommandComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server)
    void ServerRemoveStoryGoal(UUWEStoryGoalContainerComponent* Container, UUWEStoryGoal* StoryGoal);
    
    UFUNCTION(Reliable, Server)
    void ServerEndEvent(const FGuid& EventID, const FPrimaryAssetId& DynamicEventPrimaryAssetId);
    
    UFUNCTION(Reliable, Server)
    void ServerAddStoryGoal(UUWEStoryGoalContainerComponent* Container, UUWEStoryGoal* StoryGoal);
    
};

