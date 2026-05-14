#pragma once
#include "CoreMinimal.h"
#include "EMercunaGroundAgentCategory.h"
#include "EMercunaGroundAgentShape.h"
#include "Mercuna2DAgentProperties.h"
#include "MercunaWaterProperties.h"
#include "MercunaGroundAgentProperties.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaGroundAgentProperties : public FMercuna2DAgentProperties {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    EMercunaGroundAgentCategory Category;
    
    UPROPERTY(Config, EditAnywhere)
    EMercunaGroundAgentShape Shape;
    
    UPROPERTY(Config, EditAnywhere)
    float PawnWidth;
    
    UPROPERTY(Config, EditAnywhere)
    float PawnLength;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxSlopeAngle;
    
    UPROPERTY(Config, EditAnywhere)
    float LedgeMarginFraction;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxLaunchSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxImpactSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float MinLaunchAngle;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxLaunchOrLandAngle;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxPerpendicularLaunchAngle;
    
    UPROPERTY(Config, EditAnywhere)
    float JumpCostMultiplier;
    
    UPROPERTY(EditAnywhere)
    FMercunaWaterProperties WaterProperties;
    
    FMercunaGroundAgentProperties();
};

