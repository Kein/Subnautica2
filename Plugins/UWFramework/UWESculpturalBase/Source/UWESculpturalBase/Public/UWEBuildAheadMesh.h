#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEBuildAheadMesh.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FUWEBuildAheadMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FTransform Transform;
    
    UWESCULPTURALBASE_API FUWEBuildAheadMesh();
};

