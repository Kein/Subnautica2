#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEUnsupportedIndicator.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FUWEUnsupportedIndicator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform Transform;
    
    UWESCULPTURALBASE_API FUWEUnsupportedIndicator();
};

