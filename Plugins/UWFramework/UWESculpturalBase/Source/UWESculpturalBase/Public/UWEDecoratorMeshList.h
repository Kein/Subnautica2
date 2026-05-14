#pragma once
#include "CoreMinimal.h"
#include "UWEDecoratorMesh.h"
#include "UWEDecoratorMeshList.generated.h"

USTRUCT(BlueprintType)
struct FUWEDecoratorMeshList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FUWEDecoratorMesh> Meshes;
    
    UWESCULPTURALBASE_API FUWEDecoratorMeshList();
};

