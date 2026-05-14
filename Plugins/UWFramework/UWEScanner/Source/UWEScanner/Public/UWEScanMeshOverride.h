#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEScanMeshOverride.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FUWEScanMeshOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> ScanMeshOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector MeshScale;
    
    UWESCANNER_API FUWEScanMeshOverride();
};

