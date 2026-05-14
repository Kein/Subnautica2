#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEOverlapMesh.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FUWEOverlapMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FTransform Transform;
    
    UWESCULPTURALBASE_API FUWEOverlapMesh();
};

