#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPopCell.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWEWorldPopCell {
    GENERATED_BODY()
public:
    UPROPERTY()
    int64 CellIndex;
    
    UPROPERTY()
    int8 Layer;
    
    UPROPERTY()
    TSoftObjectPtr<AActor> ActorSource;
    
    UWEWORLDPOPULATION2_API FUWEWorldPopCell();
};

FORCEINLINE uint32 GetTypeHash(const FUWEWorldPopCell) { return 0; }