#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWEBioBedEntry.generated.h"

USTRUCT(BlueprintType)
struct FUWEBioBedEntry {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleAnywhere)
    FGuid BioBedId;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    FTransform SpawnTransform;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    bool bIsFallback;
    
    UWEBIOBED_API FUWEBioBedEntry();
};

