#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWERuntimeAdjacentModuleRules.h"
#include "UWEModuleRuleset.generated.h"

USTRUCT(BlueprintType)
struct FUWEModuleRuleset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<FIntVector, FUWERuntimeAdjacentModuleRules> SlotToRuleset;
    
    UWESCULPTURALBASE_API FUWEModuleRuleset();
};

