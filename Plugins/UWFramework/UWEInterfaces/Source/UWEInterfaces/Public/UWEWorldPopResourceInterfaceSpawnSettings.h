#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPopResourceInterfaceSpawnSettings.generated.h"

USTRUCT(BlueprintType)
struct FUWEWorldPopResourceInterfaceSpawnSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnablePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ForceObjectToSleep;
    
    UWEINTERFACES_API FUWEWorldPopResourceInterfaceSpawnSettings();
};

