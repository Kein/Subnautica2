#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mercuna2DAgentProperties.generated.h"

USTRUCT()
struct MERCUNA_API FMercuna2DAgentProperties {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float StepHeight;
    
    UPROPERTY(Config, EditAnywhere)
    float HeightClearance;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxAngleChange;
    
    UPROPERTY(Config, EditAnywhere)
    TSet<FSoftObjectPath> NavigableMaterials;
    
    UPROPERTY(Config, EditAnywhere)
    TSet<FSoftObjectPath> UnnavigableMaterials;
    
    FMercuna2DAgentProperties();
};

