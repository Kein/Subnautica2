#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UWEBTTFindNavSurfaceGrid.generated.h"

UCLASS()
class UWEAI_API UUWEBTTFindNavSurfaceGrid : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ResultLocationKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ResultRotationKey;
    
    UPROPERTY(EditAnywhere)
    float SearchRadius;
    
    UPROPERTY(EditAnywhere)
    bool ShiftLocationByAgentRadius;
    
public:
    UUWEBTTFindNavSurfaceGrid();

};

