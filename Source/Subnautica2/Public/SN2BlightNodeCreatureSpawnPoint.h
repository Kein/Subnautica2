#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SN2BlightNodeCreatureSpawnPoint.generated.h"

USTRUCT(BlueprintType)
struct FSN2BlightNodeCreatureSpawnPoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTransform LocalTransform;
    
    SUBNAUTICA2_API FSN2BlightNodeCreatureSpawnPoint();
};

