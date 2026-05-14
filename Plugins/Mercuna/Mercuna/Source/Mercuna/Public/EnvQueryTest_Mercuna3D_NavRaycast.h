#pragma once
#include "CoreMinimal.h"
#include "Mercuna3DQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_Mercuna3D_NavRaycast.generated.h"

class UEnvQueryContext;

UCLASS()
class MERCUNA_API UEnvQueryTest_Mercuna3D_NavRaycast : public UMercuna3DQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UEnvQueryTest_Mercuna3D_NavRaycast();

};

