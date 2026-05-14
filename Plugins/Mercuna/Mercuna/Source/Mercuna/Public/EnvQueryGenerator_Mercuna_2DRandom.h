#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "Mercuna2DQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_Mercuna_2DRandom.generated.h"

class UEnvQueryContext;

UCLASS(Abstract, EditInlineNew)
class MERCUNA_API UEnvQueryGenerator_Mercuna_2DRandom : public UMercuna2DQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue MaxDistanceIsPathDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue NumberOfPoints;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> Centre;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderIntValue RandomSeed;
    
    UEnvQueryGenerator_Mercuna_2DRandom();

};

