#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPop2Query.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWEWorldPop2Query {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftClassPtr<AActor>> IncludedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftClassPtr<AActor>> ExcludedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OnlySpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OnlyActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OnlyRespawnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double MinimumDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double MaximumDepth;
    
    UWEWORLDPOPULATION2_API FUWEWorldPop2Query();
};

