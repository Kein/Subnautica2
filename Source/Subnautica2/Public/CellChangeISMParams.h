#pragma once
#include "CoreMinimal.h"
#include "CellChangeISMParams.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FCellChangeISMParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    UStaticMesh* Mesh;
    
    SUBNAUTICA2_API FCellChangeISMParams();
};
FORCEINLINE uint32 GetTypeHash(const FCellChangeISMParams) { return 0; }

