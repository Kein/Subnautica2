#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "Mercuna3DQueryTest.h"
#include "EnvQueryTest_Mercuna3D_Clamp.generated.h"

UCLASS()
class MERCUNA_API UEnvQueryTest_Mercuna3D_Clamp : public UMercuna3DQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MaxSearchRadius;
    
    UEnvQueryTest_Mercuna3D_Clamp();

};

