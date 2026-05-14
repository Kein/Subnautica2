#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "Mercuna3DQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_Mercuna3D_Reachable.generated.h"

class UEnvQueryContext;

UCLASS()
class MERCUNA_API UEnvQueryTest_Mercuna3D_Reachable : public UMercuna3DQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MaxPathLength;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UEnvQueryTest_Mercuna3D_Reachable();

};

