#pragma once
#include "CoreMinimal.h"
#include "EUWEAIMovementObjectType.h"
#include "UWEAIMovementCrawlingSurfaceDetectionSettings.generated.h"

USTRUCT(BlueprintType)
struct UWEAIMOVEMENT_API FUWEAIMovementCrawlingSurfaceDetectionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEAIMovementObjectType ObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LineTraceLengthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TraceComplexCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxSurfaceTraceIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CheckAllBlockingHits;
    
    FUWEAIMovementCrawlingSurfaceDetectionSettings();
};

