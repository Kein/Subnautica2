#pragma once
#include "CoreMinimal.h"
#include "UWEDeconstructGroup.h"
#include "UWEDeconstructGroups.generated.h"

USTRUCT(BlueprintType)
struct FUWEDeconstructGroups {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<FUWEDeconstructGroup> Groups;
    
    UWESCULPTURALBASE_API FUWEDeconstructGroups();
};

