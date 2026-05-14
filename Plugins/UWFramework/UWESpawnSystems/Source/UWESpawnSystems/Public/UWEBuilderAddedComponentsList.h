#pragma once
#include "CoreMinimal.h"
#include "UWEBuilderAddedComponentData.h"
#include "UWEBuilderAddedComponentsList.generated.h"

USTRUCT(BlueprintType)
struct UWESPAWNSYSTEMS_API FUWEBuilderAddedComponentsList {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    int32 Version;
    
    UPROPERTY(SaveGame)
    TArray<FUWEBuilderAddedComponentData> Data;
    
    FUWEBuilderAddedComponentsList();
};

