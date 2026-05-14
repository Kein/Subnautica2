#pragma once
#include "CoreMinimal.h"
#include "MercunaContextualSteeringActorParameters.generated.h"

USTRUCT(BlueprintType)
struct FMercunaContextualSteeringActorParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RepulsionDistance;
    
    UPROPERTY(EditAnywhere)
    float RepulsionWeight;
    
    UPROPERTY(EditAnywhere)
    float CohesionDistance;
    
    UPROPERTY(EditAnywhere)
    float CohesionWeight;
    
    MERCUNA_API FMercunaContextualSteeringActorParameters();
};

