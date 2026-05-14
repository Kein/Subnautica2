#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EUWECellOccupancyOverride.h"
#include "UWERuntimeModuleMatch.h"
#include "UWESculpturalBaseCell.generated.h"

USTRUCT(BlueprintType)
struct UWESCULPTURALBASE_API FUWESculpturalBaseCell {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FIntVector Coords;
    
    UPROPERTY(SaveGame)
    FGameplayTag BrushType;
    
    UPROPERTY(SaveGame)
    TArray<FGameplayTag> BaseBrushType;
    
    UPROPERTY(SaveGame)
    uint8 Flags;
    
    UPROPERTY(SaveGame)
    uint8 StructureId;
    
    UPROPERTY(SaveGame)
    uint8 VariantIndex;
    
    UPROPERTY(SaveGame)
    uint8 DeconstructIDOverride;
    
    UPROPERTY(SaveGame)
    TEnumAsByte<EUWECellOccupancyOverride> OccupancyOverride;
    
    UPROPERTY(SaveGame)
    FUWERuntimeModuleMatch ModuleMatch;
    
    UPROPERTY(SaveGame)
    FIntVector FacingDirection;
    
    UPROPERTY(SaveGame)
    float SupportAmount;
    
    FUWESculpturalBaseCell();
};

