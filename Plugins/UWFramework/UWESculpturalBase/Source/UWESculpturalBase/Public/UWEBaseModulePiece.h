#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWEAdjacentModuleRules.h"
#include "UWEBaseModulePieceID.h"
#include "UWEBaseModulePiece.generated.h"

USTRUCT(BlueprintType)
struct UWESCULPTURALBASE_API FUWEBaseModulePiece {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FUWEBaseModulePieceID ID;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGameplayTag BrushType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DeconstructID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FIntVector FacingDirection;
    
private:
    UPROPERTY()
    TMap<FIntVector, FUWEAdjacentModuleRules> Rules;
    
public:
    FUWEBaseModulePiece();
};

