#pragma once
#include "CoreMinimal.h"
#include "UWEBaseModuleMesh.h"
#include "UWEBaseModuleVariant.generated.h"

USTRUCT(BlueprintType)
struct FUWEBaseModuleVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FUWEBaseModuleMesh> Meshes;
    
    UWESCULPTURALBASE_API FUWEBaseModuleVariant();
};

