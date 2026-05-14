#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "UWEEnvQueryGenerator_CreatureSpawns.generated.h"

class AActor;
class UEnvQueryContext;

UCLASS(EditInlineNew)
class UWEAI_API UUWEEnvQueryGenerator_CreatureSpawns : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> CenterContext;
    
    UPROPERTY(EditDefaultsOnly)
    float OuterRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float InnerRadius;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AActor> CreatureFilter;
    
    UUWEEnvQueryGenerator_CreatureSpawns();

};

