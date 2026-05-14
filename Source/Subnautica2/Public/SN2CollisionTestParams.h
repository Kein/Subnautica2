#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SN2CollisionTestParams.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSN2CollisionTestParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableCollisionTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreSculpturalBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer BrushTypesToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreBaseObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreSpecifiedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftClassPtr<AActor>> IgnoredActors;
    
    SUBNAUTICA2_API FSN2CollisionTestParams();
};

