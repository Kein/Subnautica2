#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SN2GameStateCommandComponent.generated.h"

class AActor;
class UUWEStoryGoal;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2GameStateCommandComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USN2GameStateCommandComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server)
    void ServerUnlockStoryGoal(UUWEStoryGoal* StoryGoal, AActor* Target);
    
};

