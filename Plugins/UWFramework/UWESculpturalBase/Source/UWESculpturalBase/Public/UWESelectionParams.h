#pragma once
#include "CoreMinimal.h"
#include "EUWESelectionNormal.h"
#include "EUWESelectionYAxis.h"
#include "UWESelectionSize.h"
#include "UWESelectionParams.generated.h"

class UUWEBaseModule;

USTRUCT(BlueprintType)
struct FUWESelectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FUWESelectionSize> SelectionSizes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DefaultSelectionSizeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWESelectionNormal UsedNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWESelectionYAxis UsedYAxis;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RequireFullSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LimitToFlatSurfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ExcludeInteriorCorners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ExcludeSpecifiedModules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UUWEBaseModule*> ExcludedModules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LimitToOccupied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LimitToSameBrushType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LimitToSameFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LimitToSpecifiedHeightInFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> SpecifiedHeights;
    
    UWESCULPTURALBASE_API FUWESelectionParams();
};

