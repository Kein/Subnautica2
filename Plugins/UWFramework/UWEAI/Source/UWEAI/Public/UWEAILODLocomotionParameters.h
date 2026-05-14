#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEAILODLocomotionParameters.generated.h"

USTRUCT()
struct UWEAI_API FUWEAILODLocomotionParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool MovementEnabled;
    
    UPROPERTY(EditAnywhere)
    bool DisableMovementOnlyIfCrawling;
    
    UPROPERTY(EditAnywhere)
    float QualityLevel;
    
    UPROPERTY(EditAnywhere)
    bool CollisionEnabled;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag StaticObstacleAvoidanceProfileName;
    
    UPROPERTY(EditAnywhere)
    bool ForceToStayInsideHabitationArea;
    
    UPROPERTY(EditAnywhere)
    bool CanAbortSweepTestByLineTrace;
    
    FUWEAILODLocomotionParameters();
};

