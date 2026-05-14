#pragma once
#include "CoreMinimal.h"
#include "PropList.generated.h"

USTRUCT(BlueprintType)
struct FPropList {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<FString> PropNames;
    
    UWESCULPTURALBASE_API FPropList();
};

