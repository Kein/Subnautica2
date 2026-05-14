#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnvQueryTest_Mercuna2D_Project.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_MercunaSurface_Project.generated.h"

class UEnvQueryContext;

UCLASS()
class MERCUNA_API UEnvQueryTest_MercunaSurface_Project : public UEnvQueryTest_Mercuna2D_Project {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    FVector ProjectionDirection;
    
    UEnvQueryTest_MercunaSurface_Project();

};

