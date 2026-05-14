#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWESelectionBrush.h"
#include "UWESelectionData.generated.h"

class AUWESculpturalBaseActor;

USTRUCT()
struct FUWESelectionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AUWESculpturalBaseActor> base;
    
    UPROPERTY()
    FUWESelectionBrush Brush;
    
    UPROPERTY()
    int32 BrushSizeIndex;
    
    UPROPERTY()
    bool BiasRight;
    
    UPROPERTY()
    bool BiasUp;
    
    UPROPERTY()
    bool BiasFwd;
    
    UPROPERTY()
    FIntVector UnsnappedOriginCoords;
    
    UPROPERTY()
    FIntVector OriginCoords;
    
    UPROPERTY()
    uint32 Version;
    
    UPROPERTY()
    FIntVector RightAxis;
    
    UPROPERTY()
    FIntVector UpAxis;
    
    UPROPERTY()
    FIntVector OutsideNormalAxis;
    
    UPROPERTY()
    bool IsValid;
    
    UWESCULPTURALBASE_API FUWESelectionData();
};

