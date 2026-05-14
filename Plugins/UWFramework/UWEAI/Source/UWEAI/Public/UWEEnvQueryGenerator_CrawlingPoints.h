#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "UObject/NoExportTypes.h"
#include "UWEAIMovementCrawlingSurfaceDetectionSettings.h"
#include "Templates/SubclassOf.h"
#include "UWEEnvQueryGenerator_CrawlingPoints.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class UWEAI_API UUWEEnvQueryGenerator_CrawlingPoints : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> StartLocationContext;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> AIPawnContext;
    
    UPROPERTY(EditAnywhere)
    float GridCellSizePrecision;
    
    UPROPERTY(EditAnywhere)
    float GridCellSize;
    
    UPROPERTY(EditAnywhere)
    FVector2f GridHalfExtend;
    
    UPROPERTY(EditAnywhere)
    FName CollisionProfileNameForNoAIPawnContext;
    
    UPROPERTY(EditAnywhere)
    float DistanceToSurfaceForNoAIPawnContext;
    
    UPROPERTY(EditAnywhere)
    FUWEAIMovementCrawlingSurfaceDetectionSettings SurfaceDetectionSettingsForNoAIPawnContext;
    
    UPROPERTY(EditAnywhere)
    float TraceAngleStepForNoAIPawnContext;
    
    UUWEEnvQueryGenerator_CrawlingPoints();

};

