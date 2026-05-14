#pragma once
#include "CoreMinimal.h"
#include "EBuilderSnapping.h"
#include "SnappingSettings.generated.h"

USTRUCT(BlueprintType)
struct FSnappingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EBuilderSnapping DefaultSnapping;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DefaultLocationSnapSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DefaultUserRotationIncrement;
    
    SUBNAUTICA2_API FSnappingSettings();
};

