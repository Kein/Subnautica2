#pragma once
#include "CoreMinimal.h"
#include "UWEWorldSettings.generated.h"

USTRUCT(BlueprintType)
struct FUWEWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool EdgeOfWorldHasCollision_Development;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool EdgeOfWorldHasCollision_Shipping;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool EdgeOfWorldHasCollision_PlaytestShipping;
    
    UWEGAMECONFIGURATION_API FUWEWorldSettings();
};

