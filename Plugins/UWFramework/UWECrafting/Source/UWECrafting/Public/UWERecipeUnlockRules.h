#pragma once
#include "CoreMinimal.h"
#include "UWERecipeUnlockRuleEntry.h"
#include "UWERecipeUnlockRules.generated.h"

USTRUCT(BlueprintType)
struct FUWERecipeUnlockRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText RuleName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWERecipeUnlockRuleEntry> Entries;
    
    UWECRAFTING_API FUWERecipeUnlockRules();
};

