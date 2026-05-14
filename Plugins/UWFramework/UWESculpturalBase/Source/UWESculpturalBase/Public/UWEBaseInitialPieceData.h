#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEIntBounds.h"
#include "UWEInitialPieceCellData.h"
#include "UWEBaseInitialPieceData.generated.h"

UCLASS()
class UWESCULPTURALBASE_API UUWEBaseInitialPieceData : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FIntVector, FUWEInitialPieceCellData> Cells;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 FloorOffset;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FUWEIntBounds Bounds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DeconstructAsAUnit;
    
    UUWEBaseInitialPieceData();

};

