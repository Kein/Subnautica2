#pragma once
#include "CoreMinimal.h"
#include "GeometryScript/CollisionFunctions.h"
#include "GeometryScript/MeshSimplifyFunctions.h"
#include "UWESplineWaterCurrentMeshGenerationSettings.generated.h"

class UMaterial;

USTRUCT(BlueprintType)
struct UWEWATERCURRENTS_API FUWESplineWaterCurrentMeshGenerationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SplineRadiusMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SplineLengthStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SplineCircleStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SimplifyToPlanar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGeometryScriptPlanarSimplifyOptions SimplifyToPlanarOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool GenerateSimpleCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGeometryScriptCollisionFromMeshOptions SimpleCollisionOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString StaticMeshDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString StaticMeshNamePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VertexColoringRadiusDistanceProportion;
    
    FUWESplineWaterCurrentMeshGenerationSettings();
};

