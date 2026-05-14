#pragma once
#include "CoreMinimal.h"
#include "BrushTypeCost.h"
#include "UWEPlacementArrowOffsets.h"
#include "UWEBrushTypeSettings.generated.h"

USTRUCT(BlueprintType)
struct FUWEBrushTypeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBrushTypeCost BrushTypeCost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimePerCell;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText NounText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SnappedPlacementFloorOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool FlexibleFloorHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CeilingOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreFloorBoundariesForSolve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FUWEPlacementArrowOffsets PlacementArrowOffsets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowFeedbackWhenInvalid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowAutomaticPreviewArrows;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AlwaysUseFullCellForOverlap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UsesFacingDirectionsForSolve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DisableDefaultOverlap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsAdditive;
    
    UWESCULPTURALBASE_API FUWEBrushTypeSettings();
};

