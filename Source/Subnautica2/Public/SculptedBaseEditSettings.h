#pragma once
#include "CoreMinimal.h"
#include "SculptedBaseEditSettings.generated.h"

USTRUCT(BlueprintType)
struct FSculptedBaseEditSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InteractDistance;
    
    SUBNAUTICA2_API FSculptedBaseEditSettings();
};

