#pragma once
#include "CoreMinimal.h"
#include "Mercuna2DQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_Mercuna2D_Navigable.generated.h"

class APawn;

UCLASS(Abstract)
class MERCUNA_API UEnvQueryTest_Mercuna2D_Navigable : public UMercuna2DQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APawn> AgentClass;
    
    UEnvQueryTest_Mercuna2D_Navigable();

};

