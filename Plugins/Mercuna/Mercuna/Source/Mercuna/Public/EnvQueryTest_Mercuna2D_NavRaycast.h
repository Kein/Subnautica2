#pragma once
#include "CoreMinimal.h"
#include "Mercuna2DQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_Mercuna2D_NavRaycast.generated.h"

class APawn;
class UEnvQueryContext;

UCLASS(Abstract)
class MERCUNA_API UEnvQueryTest_Mercuna2D_NavRaycast : public UMercuna2DQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APawn> AgentClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UEnvQueryTest_Mercuna2D_NavRaycast();

};

