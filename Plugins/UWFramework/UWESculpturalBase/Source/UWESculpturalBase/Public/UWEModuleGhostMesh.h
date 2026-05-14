#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEModuleGhostMesh.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FUWEModuleGhostMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 ShowCondition;
    
    UWESCULPTURALBASE_API FUWEModuleGhostMesh();
};

