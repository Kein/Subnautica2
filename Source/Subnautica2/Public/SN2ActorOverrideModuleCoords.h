#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SN2ActorOverrideModuleCoords.generated.h"

USTRUCT(BlueprintType)
struct FSN2ActorOverrideModuleCoords {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIntVector Coords;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform PlacementOffset;
    
    SUBNAUTICA2_API FSN2ActorOverrideModuleCoords();
};

