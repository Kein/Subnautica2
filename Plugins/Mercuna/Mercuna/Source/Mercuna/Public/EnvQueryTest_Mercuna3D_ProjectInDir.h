#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "UObject/NoExportTypes.h"
#include "Mercuna3DQueryTest.h"
#include "EnvQueryTest_Mercuna3D_ProjectInDir.generated.h"

UCLASS()
class MERCUNA_API UEnvQueryTest_Mercuna3D_ProjectInDir : public UMercuna3DQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MaxProjectDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue ProjectToNavigable;
    
    UPROPERTY(EditDefaultsOnly)
    FVector ProjectDirection;
    
    UEnvQueryTest_Mercuna3D_ProjectInDir();

};

