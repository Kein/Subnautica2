#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "Mercuna2DQueryGenerator.generated.h"

class APawn;

UCLASS(Abstract, EditInlineNew)
class MERCUNA_API UMercuna2DQueryGenerator : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APawn> AgentClass;
    
    UMercuna2DQueryGenerator();

};

