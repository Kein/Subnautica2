#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "UWEEnvQueryGenerator_SpherePoints.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class UWEAI_API UUWEEnvQueryGenerator_SpherePoints : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> CenterContext;
    
    UPROPERTY(EditDefaultsOnly)
    float SphereRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float SphereInnerRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FVector SphereScale;
    
    UPROPERTY(EditDefaultsOnly)
    FVector PointDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FVector PointsShiftProportion;
    
    UUWEEnvQueryGenerator_SpherePoints();

};

