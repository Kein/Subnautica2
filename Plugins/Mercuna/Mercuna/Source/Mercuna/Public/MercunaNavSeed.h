#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "MercunaNavSeed.generated.h"

class AMercunaNavGraph;

UCLASS(MinimalAPI)
class AMercunaNavSeed : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bApplyToAllNavGraphs;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AMercunaNavGraph> NavGraph;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery GraphTagQuery;
    
public:
    AMercunaNavSeed(const FObjectInitializer& ObjectInitializer);

};

