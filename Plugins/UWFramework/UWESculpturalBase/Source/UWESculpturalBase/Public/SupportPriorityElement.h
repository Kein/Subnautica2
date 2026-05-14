#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SupportPriorityElement.generated.h"

USTRUCT()
struct FSupportPriorityElement {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    int32 VerticalPriority;
    
    UPROPERTY(SaveGame)
    float HorizontalStrength;
    
    UPROPERTY(SaveGame)
    int32 FloorPriority;
    
    UPROPERTY(SaveGame)
    FIntVector CellCoords;
    
    UPROPERTY(SaveGame)
    FIntVector SupportCell;
    
    UWESCULPTURALBASE_API FSupportPriorityElement();
};

