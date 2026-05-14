#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Engine/EngineTypes.h"
#include "UWEBTTTraceCollision.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTTTraceCollision : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ResultKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchConeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YawConeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchConeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YawConeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OnlyCrawlingSurfaces;
    
    UPROPERTY(EditAnywhere)
    uint8 SupportedCrawlingObjectTypes;
    
public:
    UUWEBTTTraceCollision();

};

