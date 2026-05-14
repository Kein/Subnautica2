#pragma once
#include "CoreMinimal.h"
#include "SN2GhostMaterialKey.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSN2GhostMaterialKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool IsEdited;
    
    UPROPERTY()
    UMaterialInterface* Material;
    
    SUBNAUTICA2_API FSN2GhostMaterialKey();
};
FORCEINLINE uint32 GetTypeHash(const FSN2GhostMaterialKey) { return 0; }

