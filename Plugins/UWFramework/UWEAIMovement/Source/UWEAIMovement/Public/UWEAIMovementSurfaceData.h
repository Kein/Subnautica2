#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "EUWEAIMovementSurfaceType.h"
#include "UWEAIMovementSurfaceData.generated.h"

UCLASS(EditInlineNew)
class UWEAIMOVEMENT_API UUWEAIMovementSurfaceData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EUWEAIMovementSurfaceType SurfaceType;
    
    UPROPERTY(EditAnywhere)
    bool IsCrawlingSurface;
    
    UPROPERTY(EditAnywhere)
    uint8 SupportedObjectTypes;
    
    UPROPERTY(EditAnywhere)
    float ObstacleAvoidanceWeight;
    
    UUWEAIMovementSurfaceData();

};

