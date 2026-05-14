#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEScanHologram.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FUWEScanHologram {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> HologramMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector HologramScale;
    
    UWESCANNER_API FUWEScanHologram();
};

