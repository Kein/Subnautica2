#pragma once
#include "CoreMinimal.h"
#include "EUWEAIMovementCrawlingModuleCollisionSurfaceSource.h"
#include "EUWEAIMovementCrawlingModuleSurfaceAlignmentMode.h"
#include "UWEAIMovementCoreModuleSettings.h"
#include "UWEAIMovementCrawlingSurfaceDetectionSettings.h"
#include "UWEAIMovementCrawlingModuleSettings.generated.h"

UCLASS()
class UWEAIMOVEMENT_API UUWEAIMovementCrawlingModuleSettings : public UUWEAIMovementCoreModuleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AddOwnerRadiusToDistanceToSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceToSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEAIMovementCrawlingSurfaceDetectionSettings SurfaceDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseCollisionHitForSurfaceDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreCollisionHitWithTheSameSurfaceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SmoothSurfaceNormals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmoothingNormalsMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SmoothingBufferSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEAIMovementCrawlingModuleSurfaceAlignmentMode SurfaceAlignmentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEAIMovementCrawlingModuleCollisionSurfaceSource CollisionSurfaceSource;
    
    UUWEAIMovementCrawlingModuleSettings();

};

