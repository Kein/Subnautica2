#pragma once
#include "CoreMinimal.h"
#include "UWEChaosPhysicsControllerEnvironmentSettings.generated.h"

USTRUCT(BlueprintType)
struct FUWEChaosPhysicsControllerEnvironmentSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngularDamping;
    
    UWEPHYSICS_API FUWEChaosPhysicsControllerEnvironmentSettings();
};

