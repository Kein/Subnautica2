#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEGreedyMeshID.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FUWEGreedyMeshID {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform CellTransform;
    
    UPROPERTY()
    UStaticMesh* StaticMesh;
    
    UWESCULPTURALBASE_API FUWEGreedyMeshID();
};
FORCEINLINE uint32 GetTypeHash(const FUWEGreedyMeshID) { return 0; }

