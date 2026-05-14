#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UWETargetActor.h"
#include "SN2SustainedHoverComponent.generated.h"

class UUWEStoryGoal;

UCLASS(DefaultConfig, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2SustainedHoverComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float HoverTimeToTrigger;
    
    UPROPERTY(EditAnywhere)
    float TickRate;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEStoryGoal> StoryGoalOnHoverComplete;
    
    UPROPERTY(EditAnywhere)
    float MaxHoverDistance;
    
public:
    USN2SustainedHoverComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnHoverTargetChanged(FUWETargetActor OldHoverTarget, FUWETargetActor NewHoverTarget);
    
    UFUNCTION()
    void CheckHoveredActor();
    
};

