#pragma once
#include "CoreMinimal.h"
#include "UWENonGenerativeBaseModuleVariant.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FUWENonGenerativeBaseModuleVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<UStaticMesh*> Meshes;
    
    UWESCULPTURALBASE_API FUWENonGenerativeBaseModuleVariant();
};

