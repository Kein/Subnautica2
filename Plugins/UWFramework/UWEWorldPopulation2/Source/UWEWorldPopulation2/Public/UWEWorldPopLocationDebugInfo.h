#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWEWorldPopLocationDebugInfo.generated.h"

USTRUCT(BlueprintType)
struct FUWEWorldPopLocationDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly)
    int64 CellLayer;
    
    UPROPERTY(BlueprintReadOnly)
    int64 CellIndex;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsEmpty;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsPlayableSpace;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsLandscapeCell;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTagContainer CellTags;
    
    UWEWORLDPOPULATION2_API FUWEWorldPopLocationDebugInfo();
};

