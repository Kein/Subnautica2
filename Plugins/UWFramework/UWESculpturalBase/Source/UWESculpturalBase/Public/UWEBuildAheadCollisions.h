#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWEBuildAheadMesh.h"
#include "UWESelectionSize.h"
#include "UWEBuildAheadCollisions.generated.h"

USTRUCT(BlueprintType)
struct FUWEBuildAheadCollisions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FUWEBuildAheadMesh> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSet<FIntVector> RequiredEmptyCells;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGameplayTagContainer AffectedItemBrushes;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FIntVector HitCoords;
    
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
    
    UWESCULPTURALBASE_API FUWEBuildAheadCollisions();
};

