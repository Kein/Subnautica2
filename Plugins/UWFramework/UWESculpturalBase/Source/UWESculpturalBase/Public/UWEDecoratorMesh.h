#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWEDecoratorMesh.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FUWEDecoratorMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* Mesh;
    
    UPROPERTY(EditAnywhere)
    bool OverrideHoldingCell;
    
    UPROPERTY(EditAnywhere)
    FIntVector HoldingCell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowInGhost;
    
    UWESCULPTURALBASE_API FUWEDecoratorMesh();
};

