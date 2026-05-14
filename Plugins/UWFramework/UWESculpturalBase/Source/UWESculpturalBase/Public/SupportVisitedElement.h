#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SupportVisitedElement.generated.h"

USTRUCT()
struct FSupportVisitedElement {
    GENERATED_BODY()
public:
    UPROPERTY()
    FIntVector Cell;
    
    UPROPERTY()
    FIntVector SupportCell;
    
    UWESCULPTURALBASE_API FSupportVisitedElement();
};

