#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWESelectionParams.h"
#include "UWESelectionSize.h"
#include "SN2EditSelectionData.generated.h"

class AUWESculpturalBaseActor;

USTRUCT()
struct FSN2EditSelectionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AUWESculpturalBaseActor> base;
    
    UPROPERTY()
    FUWESelectionParams Params;
    
    UPROPERTY()
    FUWESelectionSize SelectionSize;
    
    UPROPERTY()
    bool IsInside;
    
    UPROPERTY()
    bool BiasRight;
    
    UPROPERTY()
    bool BiasUp;
    
    UPROPERTY()
    FIntVector OriginCoords;
    
    UPROPERTY()
    uint32 Version;
    
    UPROPERTY()
    FIntVector RightAxis;
    
    UPROPERTY()
    FIntVector UpAxis;
    
    UPROPERTY()
    FIntVector NormalAxis;
    
    UPROPERTY()
    bool IsValid;
    
    SUBNAUTICA2_API FSN2EditSelectionData();
};

