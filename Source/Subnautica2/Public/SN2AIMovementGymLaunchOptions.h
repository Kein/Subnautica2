#pragma once
#include "CoreMinimal.h"
#include "SN2AIMovementGymLaunchOptions.generated.h"

USTRUCT(BlueprintType)
struct FSN2AIMovementGymLaunchOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString CreatureId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MovementStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Mode2D;
    
    SUBNAUTICA2_API FSN2AIMovementGymLaunchOptions();
};

