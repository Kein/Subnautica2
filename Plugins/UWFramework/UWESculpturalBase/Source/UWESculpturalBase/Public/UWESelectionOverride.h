#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWESelectionSize.h"
#include "UWESelectionOverride.generated.h"

USTRUCT(BlueprintType)
struct FUWESelectionOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool OverrideHitCoords;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FIntVector HitCoords;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool OverrideNormal;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FIntVector Normal;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool OverrideSelectionSize;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FUWESelectionSize SelectionSizeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool OverridePieceRotation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FRotator PieceRotation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool OverridePieceOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FIntVector PieceOriginCoords;
    
    UWESCULPTURALBASE_API FUWESelectionOverride();
};

