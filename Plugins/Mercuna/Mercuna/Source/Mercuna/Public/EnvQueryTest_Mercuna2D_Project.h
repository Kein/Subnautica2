#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EMercunaProjectionType.h"
#include "Mercuna2DQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_Mercuna2D_Project.generated.h"

class APawn;

UCLASS(Abstract)
class MERCUNA_API UEnvQueryTest_Mercuna2D_Project : public UMercuna2DQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APawn> AgentClass;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MaxProjectionDistance;
    
    UPROPERTY(EditDefaultsOnly)
    EMercunaProjectionType ProjectionType;
    
    UEnvQueryTest_Mercuna2D_Project();

};

