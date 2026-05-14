#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MerOctreeEditorSettings.generated.h"

USTRUCT(BlueprintType)
struct FMerOctreeEditorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FLinearColor NavigableColor;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor HighCostColor;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor UnnavigableColor;
    
    MERCUNA_API FMerOctreeEditorSettings();
};

