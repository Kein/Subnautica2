#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEModuleMatch.h"
#include "UWEAllowedPieces.generated.h"

USTRUCT(BlueprintType)
struct FUWEAllowedPieces {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FUWEModuleMatch> ValidMatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag AllowAnyOfBrushType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DecoratorCell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ModuleMeshesToHide;
    
    UWESCULPTURALBASE_API FUWEAllowedPieces();
};

