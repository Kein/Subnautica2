#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWESelectionBrush.generated.h"

USTRUCT(BlueprintType)
struct UWESCULPTURALBASE_API FUWESelectionBrush {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIntVector> BrushSizes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ForwardOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseWorldUpForZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseTraceDirForX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RequireFullSelectionX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RequireFullSelectionY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RequireFullSelectionZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LimitToFlatSurfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LimitToSameBrushType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LimitToSameSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LimitToSameOccupancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LimitToSpecifiedHeightInFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<int32> SpecifiedHeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseHitAsXCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PlaceInitialPiece;
    
    FUWESelectionBrush();
};

