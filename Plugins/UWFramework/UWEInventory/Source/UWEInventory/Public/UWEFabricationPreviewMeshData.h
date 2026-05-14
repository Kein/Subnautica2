#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEFabricationPreviewMeshData.generated.h"

class UMaterialInstance;
class USkeletalMesh;
class UStaticMesh;

USTRUCT(BlueprintType)
struct UWEINVENTORY_API FUWEFabricationPreviewMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform RelativeTransform;
    
    UPROPERTY(BlueprintReadOnly)
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadOnly)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly)
    UMaterialInstance* MaterialInstance;
    
    FUWEFabricationPreviewMeshData();
};

