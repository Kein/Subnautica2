#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2StoryGoalDebuggerComponent.generated.h"

class UInputAction;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2StoryGoalDebuggerComponent : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowStoryGoalsInTreeView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowOnlyUnlockedStoryGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UInputAction* StoryGoalDebugAction;
    
    USN2StoryGoalDebuggerComponent(const FObjectInitializer& ObjectInitializer);

};

