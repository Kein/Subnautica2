#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWEInitialPieceCellData.generated.h"

USTRUCT(BlueprintType)
struct FUWEInitialPieceCellData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag BaseBrushType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag CurrentBrushType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIntVector FacingDirection;
    
    UWESCULPTURALBASE_API FUWEInitialPieceCellData();
};

