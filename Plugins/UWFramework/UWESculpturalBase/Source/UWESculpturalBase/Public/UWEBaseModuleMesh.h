#pragma once
#include "CoreMinimal.h"
#include "UWEBaseModuleMesh.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FUWEBaseModuleMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool IgnoreForAutoRuleGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool ExteriorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool ExcludeFromGhost;
    
    UWESCULPTURALBASE_API FUWEBaseModuleMesh();
};

